#include "LogInDialog.h"

LogInDialog::LogInDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	QRegExp nameExp1(".{0,20}");
	ui.loginLine->setValidator(new QRegExpValidator(nameExp1, this));
	ui.passwordLine->setValidator(new QRegExpValidator(nameExp1, this));
}

LogInDialog::~LogInDialog()
{
}

void LogInDialog::on_enterButton_clicked()
{
	accept();
}


