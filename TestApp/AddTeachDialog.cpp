#include "AddTeachDialog.h"

AddTeachDialog::AddTeachDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	QRegExp nameExp(".{0,50}");
	ui.nameLine->setValidator(new QRegExpValidator(nameExp, this));
	QRegExp nameExp1(".{0,20}");
	ui.loginLine->setValidator(new QRegExpValidator(nameExp1, this));
	ui.passwordLine->setValidator(new QRegExpValidator(nameExp1, this));
}

AddTeachDialog::~AddTeachDialog()
{
}

void AddTeachDialog::on_okButton_clicked()
{
	if (!(ui.nameLine->text() == "" || ui.loginLine->text() == "" || ui.passwordLine->text() == ""))
		accept();
	else
		QMessageBox::warning(this, u8"!!!", u8"¬ведите данные", QMessageBox::Ok);
}
