#include "AddToWrQuestDialog.h"

AddToWrQuestDialog::AddToWrQuestDialog(Question *quest, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	question = quest;

	QString q = QString::fromStdString(question->get_question());
	QString ra = QString::fromStdString(question->get_rightAnswer());
	QString rate = QString::number(question->get_rate());
	ui.questLine->document()->setPlainText(q);
	ui.RALine->setText(ra);
	ui.rateLine->setText(rate);
	QRegExp rateExp("[1-9][0-9]{0,2}");
	ui.rateLine->setValidator(new QRegExpValidator(rateExp, this));
	QRegExp nameExp(".{0,100}");
	ui.RALine->setValidator(new QRegExpValidator(nameExp, this));
}

AddToWrQuestDialog::~AddToWrQuestDialog()
{
}

void AddToWrQuestDialog::on_cancelButton_clicked()
{
	close();
}

void AddToWrQuestDialog::on_okButton_clicked()
{
	if (!(ui.rateLine->text() == "0" || ui.RALine->text() == "" || ui.questLine->document()->toRawText() == ""))
		accept();
	else
	{
		QMessageBox::warning(this, u8"Не хватает данных", u8"Заполните пусты строки", QMessageBox::Ok);
	}
}
