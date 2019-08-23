#include "CloseDialog.h"

CloseDialog::CloseDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

CloseDialog::~CloseDialog()
{
}

void CloseDialog::on_yesButton_clicked()
{
	accept();
	emit yes();
}

void CloseDialog::on_noButton_clicked()
{
	accept();
	emit no();
}

void CloseDialog::on_cancelButton_clicked()
{
	close();
}
