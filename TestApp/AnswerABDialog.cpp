#include "AnswerABDialog.h"

AnswerABDialog::AnswerABDialog(Question *quest, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	QString question = QString::fromStdString(quest->get_question());
	ui.questText->setText(question);
	QString a = QString::fromStdString(quest->get_map('a'));
	QString b = QString::fromStdString(quest->get_map('b'));
	QString c = QString::fromStdString(quest->get_map('c'));
	QString d = QString::fromStdString(quest->get_map('d'));
	ui.aLine->setText(a);
	ui.bLine->setText(b);
	ui.cLine->setText(c);
	ui.dLine->setText(d);
}

AnswerABDialog::~AnswerABDialog()
{
}

void AnswerABDialog::on_okButton_clicked()
{
	if (ui.aRadio->isChecked() || ui.bRadio->isChecked() || ui.cRadio->isChecked() || ui.dRadio->isChecked())
		accept();
	else
		QMessageBox::warning(this, u8"!!", u8"¬ведите ответ", QMessageBox::Ok);
}
