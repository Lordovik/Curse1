#include "AddSubjectDialog.h"

AddSubjectDialog::AddSubjectDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);


	QRegExp nameExp(".{0,30}");
	ui.nameLine->setValidator(new QRegExpValidator(nameExp, this));
}

AddSubjectDialog::~AddSubjectDialog()
{
}

void AddSubjectDialog::on_okButton_clicked()
{
	if (ui.nameLine->text() != "")
		accept();
	else
		QMessageBox::warning(this, u8"”пс!", u8"¬ведите название", QMessageBox::Ok);
}
