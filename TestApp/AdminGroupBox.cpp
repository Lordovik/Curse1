#include "AdminGroupBox.h"

AdminGroupBox::AdminGroupBox(Subject *subject[30], int id, Person *teach[], int *persCount, QWidget *parent)
	: QGroupBox(parent)
{
	ui.setupUi(this);

	logCount = 0;

	this->persCount = persCount;
	*subjects = *subject;
	this->id = id;
	Subject *subj = subject[id];
	persons = teach;

	for (int i = 0;
		i < *persCount;
		i++)
	{
		if (persons[i]->get_type() == TEACH
			&& persons[i]->get_subj(0)->get_name() == subj->get_name() )
		{
			const std::string teachName = persons[i]->get_name();
			QString str = QString::fromStdString(teachName);
			QListWidgetItem *item = new QListWidgetItem(str, ui.teachList);
			QString str1 = (u8"Логин: ");
			str1 += QString::fromStdString(persons[i]->get_login());
			str1 += u8"   Пароль: ";
			str1 += QString::fromStdString(persons[i]->get_password());
			item->setData(Qt::UserRole, str1);
			logins[logCount++] = persons[i]->get_login();
		}
	}
}

AdminGroupBox::~AdminGroupBox()
{
}

void AdminGroupBox::on_addButton_clicked()
{
	AddTeachDialog *dialog = new AddTeachDialog(this);
	if (dialog->exec())
	{
		int eee = *persCount;
		std::string name = dialog->ui.nameLine->text().toStdString();
		std::string login = dialog->ui.loginLine->text().toStdString();
		bool b = true;
		for (int i = 0; i < *persCount && b; i++)
		{
			if (login == persons[i]->get_login())
				b = false;
		}
		if (b)
		{
			std::string password = dialog->ui.passwordLine->text().toStdString();
			persons[*persCount] = new Teacher(name, login, password, 1, subjects, id);
			QListWidgetItem *item = new QListWidgetItem(dialog->ui.nameLine->text(), ui.teachList);
			QString str1 = (u8"Логин: ");
			str1 += QString::fromStdString(login);
			str1 += u8"   Пароль: ";
			str1 += QString::fromStdString(password);
			item->setData(Qt::UserRole, str1);
			eee++;
			*persCount = eee;
			logins[logCount++] = login;
		}
		else
			QMessageBox::warning(this, u8"ерр", u8"Такой логин уже есть", QMessageBox::Ok);
	}
	delete dialog;
}
void AdminGroupBox::on_delButton_clicked()
{
	int id = ui.teachList->currentIndex().row();

	if (id >= 0)
	{
		int i = 0;
		for (; i < *persCount; i++)
		{
			if (persons[i]->get_login() == logins[id])
				break;
		}

		for (int j = i; j < *persCount - 1; j++)
		{
			persons[j] = persons[j + 1];
		}
		int eee = *persCount;
		eee--;
		*persCount = eee;

		ui.teachList->currentItem()->~QListWidgetItem();
	}
}

void AdminGroupBox::on_teachList_currentItemChanged()
{
	QListWidgetItem *curItem = ui.teachList->currentItem();

	if (curItem) {
		ui.dataLabel->setText(curItem->data(Qt::UserRole).toString());
	}
	else {
		ui.dataLabel->setText(u8"<No item selected>");
	}
}

void AdminGroupBox::on_dsButton_clicked()
{
	emit del_subj();
}
