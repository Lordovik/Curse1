#include "StudDialog.h"

StudDialog::StudDialog(Subject *subject[30], int subjCount, Person *teach[], int *persCount, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	logCount = 0;
	this->persCount = persCount;
	persons = teach;
	*subjects = *subject;
	this->subjCount = subjCount;

	for (int i = 0;
		i < *persCount;
		i++)
	{
		if (persons[i]->get_type() == STUD)
		{
			const std::string teachName = persons[i]->get_name();
			QString str = QString::fromStdString(teachName);
			QListWidgetItem *item = new QListWidgetItem(str, ui.studList);
			QString str1 = (u8"Логин: ");
			str1 += QString::fromStdString(persons[i]->get_login());
			str1 += u8"   Пароль: ";
			str1 += QString::fromStdString(persons[i]->get_password());
			item->setData(Qt::UserRole, str1);
			logins[logCount++] = persons[i]->get_login();
		}
	}
}

StudDialog::~StudDialog()
{
}

void StudDialog::on_addButton_clicked()
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
			persons[*persCount] = new Student(name, login, password, subjCount, subjects);
			QListWidgetItem *item = new QListWidgetItem(dialog->ui.nameLine->text(), ui.studList);
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

void StudDialog::on_delButton_clicked()
{
	int id = ui.studList->currentIndex().row();

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

		ui.studList->currentItem()->~QListWidgetItem();
	}
}

void StudDialog::on_studList_currentItemChanged()
{
	QListWidgetItem *curItem = ui.studList->currentItem();

	if (curItem) {
		ui.dataLabel->setText(curItem->data(Qt::UserRole).toString());
	}
	else {
		ui.dataLabel->setText(u8"<No item selected>");
	}
}

