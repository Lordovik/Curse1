#include "AnswerTWDialog.h"

AnswerTWDialog::AnswerTWDialog(Question *quest, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	QString question = QString::fromStdString(quest->get_question());
	ui.questText->setText(question);

	QRegExp nameExp(".{0,100}");
	ui.answerLine->setValidator(new QRegExpValidator(nameExp, this));
}

AnswerTWDialog::~AnswerTWDialog()
{
}

void AnswerTWDialog::on_okButton_clicked()
{
	if (ui.answerLine->text() != "")
		accept();
	else
		QMessageBox::warning(this, u8"!!", u8"¬ведите ответ", QMessageBox::Ok);
}
