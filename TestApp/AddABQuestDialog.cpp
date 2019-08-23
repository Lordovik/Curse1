#include "AddABQuestDialog.h"

AddABQuestDialog::AddABQuestDialog(Question *quest, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	question = quest;

	QString q = QString::fromStdString(question->get_question());
	QString ra = QString::fromStdString(question->get_rightAnswer());
	QString rate = QString::number(question->get_rate());
	QString a = QString::fromStdString(question->get_map('a'));
	QString b = QString::fromStdString(question->get_map('b'));
	QString c = QString::fromStdString(question->get_map('c'));
	QString d = QString::fromStdString(question->get_map('d'));
	ui.questLine->document()->setPlainText(q);
	ui.RALine->setText(ra);
	ui.rateLine->setText(rate);
	ui.aLine->setText(a);
	ui.bLine->setText(b); 
	ui.cLine->setText(c);
	ui.dLine->setText(d);
	if (ra != "")
	{
		if (a == ra)
			ui.aRadio->toggle();
		if (b == ra)
			ui.bRadio->toggle();
		if (c == ra)
			ui.cRadio->toggle();
		if (d == ra)
			ui.dRadio->toggle();
	}

	QRegExp rateExp("[1-9][0-9]{0,2}");
	ui.rateLine->setValidator(new QRegExpValidator(rateExp, this));
	QRegExp nameExp(".{0,100}");
	ui.RALine->setValidator(new QRegExpValidator(nameExp, this));
	ui.aLine->setValidator(new QRegExpValidator(nameExp, this));
	ui.bLine->setValidator(new QRegExpValidator(nameExp, this));
	ui.cLine->setValidator(new QRegExpValidator(nameExp, this));
	ui.dLine->setValidator(new QRegExpValidator(nameExp, this));
}

AddABQuestDialog::~AddABQuestDialog()
{
}

void AddABQuestDialog::on_aRadio_toggled(bool b)
{
	static QString a;
	if (b)
	{
		a = ui.aLine->text();
		ui.aLine->setText(ui.RALine->text());
	}
	else
		ui.aLine->setText(a);
	ui.aLine->setEnabled(!b);
}

void AddABQuestDialog::on_bRadio_toggled(bool b)
{
	static QString a;
	if (b)
	{
		a = ui.bLine->text();
		ui.bLine->setText(ui.RALine->text());
	}
	else
		ui.bLine->setText(a);
	ui.bLine->setEnabled(!b);
}

void AddABQuestDialog::on_cRadio_toggled(bool b)
{
	static QString a;
	if (b)
	{
		a = ui.cLine->text();
		ui.cLine->setText(ui.RALine->text());
	}
	else
		ui.cLine->setText(a);
	ui.cLine->setEnabled(!b);
}

void AddABQuestDialog::on_dRadio_toggled(bool b)
{
	static QString a;
	if (b)
	{
		a = ui.dLine->text();
		ui.dLine->setText(ui.RALine->text());
	}
	else
		ui.dLine->setText(a);
	ui.dLine->setEnabled(!b);
}

void AddABQuestDialog::on_cancelButton_clicked()
{
	close();
}

void AddABQuestDialog::on_okButton_clicked()
{
	if (!(ui.aLine->text() == "" || ui.bLine->text() == "" || ui.cLine->text() == "" || ui.dLine->text() == ""
		|| ui.rateLine->text() == "0" || ui.RALine->text() == "" || ui.questLine->document()->toRawText() == "")
		|| !(ui.aRadio->isChecked() || ui.bRadio->isChecked() || ui.cRadio->isChecked() || ui.dRadio->isChecked()))
		accept();
	else
	{
		QMessageBox::warning(this, u8"Не хватает данных", u8"Заполните пусты строки", QMessageBox::Ok);
	}
}

void AddABQuestDialog::on_RALine_textChanged(QString str)
{
	if(ui.aRadio->isChecked())
		ui.aLine->setText(str);
	if (ui.bRadio->isChecked())
		ui.bLine->setText(str);
	if (ui.cRadio->isChecked())
		ui.cLine->setText(str);
	if (ui.dRadio->isChecked())
		ui.dLine->setText(str);
}

