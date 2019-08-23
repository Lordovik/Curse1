#include "TestApp.h"

TestApp::TestApp(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	persCount = 1;
	subjCount = 0;
	char current_work_dir[FILENAME_MAX];
	_getcwd(current_work_dir, sizeof(current_work_dir));
	filename = current_work_dir;
	filename += "\\data.jojo";

	ifile.open(filename);
	if (ifile)
		read();
	else
		persons[0] = new Admin("1", "1", "1", subjCount, subjects);
	ifile.close();

	log_in();
}

void TestApp::save()
{
	remove(filename.c_str());
	ofile.open(filename, std::ofstream::out | std::ofstream::binary);
	ofile.write((char*)&subjCount, sizeof(int));
	ofile.write((char*)&persCount, sizeof(int));
	for (int i = 0; i < subjCount; i++)
		writeString(&ofile, names_of_subjects[i]);
	for (int i = 0; i < subjCount; i++)
		subjects[i]->save();
	for (int i = 0; i < persCount; i++)
		persons[i]->writeToFile(&ofile);
	ofile.close();
}

void TestApp::read()
{
	ifile.read((char*)&subjCount, sizeof(int));
	ifile.read((char*)&persCount, sizeof(int));
	for (int i = 0; i < subjCount; i++)
		readString(&ifile, &names_of_subjects[i]);
	for (int i = 0; i < subjCount; i++)
		subjects[i] = new Subject(names_of_subjects[i]);
	for (int i = 0; i < persCount; i++)
	{
		int id;
		ifile.read((char*)&id, sizeof(int));
		switch (id)
		{
		case ADMIN:
			persons[i] = new Admin(subjCount, subjects);
			persons[i]->readFromFile(&ifile);
			break;
		case TEACH:
			int ind;
			ifile.read((char*)&ind, sizeof(int));
			persons[i] = new Teacher(subjCount, subjects, ind);
			persons[i]->readFromFile(&ifile);
			break;
		case STUD:
			persons[i] = new Student(subjCount, subjects);
			persons[i]->readFromFile(&ifile);
			break;
		}
	}
	ifile.close();
}

void TestApp::fillForTeach(Person *teach)
{
	QTabWidget * qtab = new QTabWidget(ui.subView);
	ui.subView->addTab(qtab, QString::fromStdString(teach->get_subj(0)->get_name()));
	QGridLayout *gld = new QGridLayout(qtab);
	TeachGroupBox *tchb = new TeachGroupBox(teach->get_subj(0), qtab);
	gld->addWidget(tchb);
	qtab->setLayout(gld);
	connect(this, SIGNAL(logged_out()), qtab, SLOT(deleteLater()));
}

void TestApp::fillForAdmin(Person * admin)
{
	QAction *newS = new QAction(u8"Новый предмет", this);
	ui.menuFile->addAction(newS);
	connect(newS, SIGNAL(triggered()), this, SLOT(add_subj()));
	connect(this, SIGNAL(logged_out()), newS, SLOT(deleteLater()));

	QAction *studs = new QAction(u8"Ученики", this);
	ui.menuFile->addAction(studs);
	connect(studs, SIGNAL(triggered()), this, SLOT(open_studs()));
	connect(this, SIGNAL(logged_out()), studs, SLOT(deleteLater()));
	
	for (int i = 0; i < subjCount; i++)
	{
		QTabWidget * qtab = new QTabWidget(ui.subView);
		ui.subView->addTab(qtab, QString::fromStdString(subjects[i]->get_name()));
		QGridLayout *gld = new QGridLayout(qtab);
		AdminGroupBox *adgb = new AdminGroupBox(subjects, i, persons, &persCount, qtab);
		gld->addWidget(adgb);
		qtab->setLayout(gld);
		connect(this, SIGNAL(logged_out()), qtab, SLOT(deleteLater()));
		connect(adgb, SIGNAL(del_subj()), this, SLOT(del_subject()));
	}
}

void TestApp::fillForStud(Person * stud)
{
	for (int i = 0; i < subjCount; i++)
	{
		QTabWidget * qtab = new QTabWidget(ui.subView);
		ui.subView->addTab(qtab, QString::fromStdString(subjects[i]->get_name()));
		QGridLayout *gld = new QGridLayout(qtab);
		StudGroupBox *stgb = new StudGroupBox(subjects[i], qtab);
		gld->addWidget(stgb);
		qtab->setLayout(gld);
		connect(this, SIGNAL(logged_out()), qtab, SLOT(deleteLater()));
	}
}

int TestApp::get_subCount() const
{
	return subjCount;
}

Person * TestApp::get_person(int i) const
{
	return persons[i];
}

Subject * TestApp::get_subject(int i) const
{
	return subjects[i];
}

void TestApp::closeEvent(QCloseEvent * event)
{
	CloseDialog * dialog = new CloseDialog(this);
	connect(dialog, SIGNAL(yes()), this, SLOT(ex_with_save()));
	connect(dialog, SIGNAL(no()), this, SLOT(ex()));
	if (dialog->exec())
		event->accept();
	else 
	{
		event->ignore();
		delete dialog;
	}
}

std::string TestApp::get_subjname(int i) const
{
	return names_of_subjects[i];
}

bool TestApp::check_subj(std::string name_)
{
	for (int i = 0; i < subjCount; i++)
		if (names_of_subjects[i] == name_)
			return false;
	return true;
}

void TestApp::on_logoutAction_triggered()
{
	log_out();
}

void TestApp::log_in()
{
	int pers_type = -1;
	int id = -1;

	LogInDialog *dialog = new LogInDialog(this);
	bool b = true;
	while (b)
	{
		id = -1;
		if (!dialog->exec())
		{
			b = false;
			close();
		}
		else
		{
			std::string login = dialog->ui.loginLine->text().toStdString();
			std::string password = dialog->ui.passwordLine->text().toStdString();
			for (id = 0; id < persCount && b; id++)
			{
				if (persons[id]->logIn(login, password) == ADMIN)
				{
					pers_type = ADMIN;
					b = false;
				}
				if (persons[id]->logIn(login, password) == TEACH)
				{
					pers_type = TEACH;
					b = false;
				}
				if (persons[id]->logIn(login, password) == STUD)
				{
					pers_type = STUD;
					b = false;
				}
			}
			if (b)
				QMessageBox::warning(dialog, u8"Вход не выполнен", u8"Не верный логин или пароль", QMessageBox::Ok);
		}
	}
	delete dialog;
	id--;

	if (!(id < 0 || pers_type < 0))
	{
		switch (pers_type)
		{
		case ADMIN:
			fillForAdmin(persons[id]);
			break;
		case TEACH:
			fillForTeach(persons[id]);
			break;
		case STUD:
			fillForStud(persons[id]);
			break;
		}
		this->setEnabled(true);
	}
}

void TestApp::log_out()
{
	this->setEnabled(false);

	emit logged_out();

	log_in();
}

void TestApp::add_subj()
{
	AddSubjectDialog *dialog = new AddSubjectDialog(this);
	if (dialog->exec())
	{
		std::string name = dialog->ui.nameLine->text().toStdString();
		if (check_subj(name))
		{
			subjects[subjCount] = new Subject(name);
			names_of_subjects[subjCount] = name;
			QTabWidget * qtab = new QTabWidget(ui.subView);
			ui.subView->addTab(qtab, QString::fromStdString(subjects[subjCount]->get_name()));
			QGridLayout *gld = new QGridLayout(qtab);
			AdminGroupBox *adgb = new AdminGroupBox(subjects, subjCount, persons, &persCount, qtab);
			gld->addWidget(adgb);
			qtab->setLayout(gld);
			subjCount++;
			connect(this, SIGNAL(logged_out()), qtab, SLOT(deleteLater()));
			connect(adgb, SIGNAL(del_subj()), this, SLOT(del_subject()));
		}
		else
			QMessageBox::warning(this, u8"Ошибка", u8"Такой предмет уже есть", QMessageBox::Ok);
	}
	delete dialog;
}

void TestApp::del_subject()
{
	int i = ui.subView->currentIndex();
	ui.subView->currentWidget()->deleteLater();
	
	for (; i < subjCount - 1; i++)
		subjects[i] = subjects[i + 1];
	delete subjects[subjCount--];
}

void TestApp::open_studs()
{
	StudDialog *dialog = new StudDialog(subjects, subjCount, persons, &persCount);

	dialog->exec();
	delete dialog;
}

void TestApp::ex_with_save()
{
	on_saveAction_triggered();
	close();
}

void TestApp::ex()
{
	close();
}

void TestApp::on_saveAction_triggered()
{
	save();
	dataNum = 0;
}

