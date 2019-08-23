#include "TeachGroupBox.h"

TeachGroupBox::TeachGroupBox(Subject *subj, QTabWidget *parent)
	: QGroupBox(parent)
{
	ui.setupUi(this);

	subject = subj;

	for (int i = 0; i < subj->get_examCount(); i++)
		add_item(subj->get_exam(i));
}

TeachGroupBox::~TeachGroupBox()
{
}

void TeachGroupBox::read_ex_dial(Exam * ex, AddExamDialog * dialog)
{
	std::string name = dialog->ui.examEdit->text().toStdString();
	ex->set_name(name);
}

void TeachGroupBox::add_item(Exam * ex)
{
	const std::string exName = ex->get_name();
	QString str = QString::fromStdString(exName);
	QListWidgetItem *item = new QListWidgetItem(str, ui.exList);
	QString str1 = (u8"Кол-во вопросов: ");
	str1 += QString::number(ex->getQuestCount());
	str1 += u8"   Всего баллов: ";
	str1 += QString::number(ex->getRateSum());
	item->setData(Qt::UserRole, str1);
}

void TeachGroupBox::on_exList_currentItemChanged()
{
	QListWidgetItem *curItem = ui.exList->currentItem();

	if (curItem) {
		ui.examData->setText(curItem->data(Qt::UserRole).toString());
	}
	else {
		ui.examData->setText(u8"<No item selected>");
	}
}

void TeachGroupBox::on_changeButton_clicked()
{
	int id = ui.exList->currentIndex().row();

	if (id >= 0)
	{
		Exam *currExam = subject->get_exam(id);
		AddExamDialog *dialog = new AddExamDialog(currExam, this);

		if (dialog->exec())
			read_ex_dial(currExam, dialog);
		delete dialog;
	}
}

void TeachGroupBox::on_delButton_clicked()
{
	int id = ui.exList->currentIndex().row();


	try
	{
		subject->delExam(id);
		ui.exList->currentItem()->~QListWidgetItem();
	}
	catch (const char * ch)
	{
		QMessageBox::warning(this, u8"Ошибка", ch, QMessageBox::Ok);
	}
}

void TeachGroupBox::on_addButton_clicked()
{
	try
	{
		subject->addExam();
		Exam *currExam = subject->get_exam(subject->get_examCount() - 1);
		AddExamDialog *dialog = new AddExamDialog(currExam, this);

		if (!dialog->exec())
			subject->delExam(subject->get_examCount() - 1);
		else
		{
			read_ex_dial(currExam, dialog);
			add_item(currExam);
		}
		delete dialog;
	}
	catch (const char * ch)
	{
		QMessageBox::warning(this, u8"Ошибка", ch, QMessageBox::Ok);
	}
}