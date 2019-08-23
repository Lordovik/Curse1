#include "AddExamDialog.h"

AddExamDialog::AddExamDialog(Exam *ex, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	exam = ex;

	for (int i = 0; i < exam->getQuestCount(); i++)
	{
		add_item(exam->get_quest(i));
	}

	QRegExp nameExp(".{0,50}");
	ui.examEdit->setValidator(new QRegExpValidator(nameExp, this));
	QString exName = QString::fromStdString(ex->get_name());
	ui.examEdit->setText(exName);
}

AddExamDialog::~AddExamDialog()
{
}
void AddExamDialog::on_addAbButton_clicked()
{
	exam->addABQuest();
	Question * currQuest = exam->get_quest(exam->getQuestCount() - 1);
	AddABQuestDialog *dialog = new AddABQuestDialog(currQuest, this);
	if (!dialog->exec())
		exam->delQ(exam->getQuestCount() - 1);
	else
	{
		read_ab_dial(currQuest, dialog);
		add_item(currQuest);
	}
	delete dialog;
}

void AddExamDialog::on_addTWButton_clicked()
{
	exam->addToWrQuest();
	Question * currQuest = exam->get_quest(exam->getQuestCount() - 1);
	AddToWrQuestDialog *dialog = new AddToWrQuestDialog(currQuest, this);
	if (!dialog->exec())
		exam->delQ(exam->getQuestCount() - 1);
	else
	{
		read_tw_dial(currQuest, dialog);
		add_item(currQuest);
	}
	delete dialog;
}

void AddExamDialog::on_okButton_clicked()
{
	if (!(ui.examEdit->text() == "" || ui.questList->count() <= 0))
		accept();
	else
		QMessageBox::warning(this, u8"Не хватает данных", u8"Введите название и добавьте хотя бы один вопрос", QMessageBox::Ok);
}

void AddExamDialog::on_delButton_clicked()
{
	int id = ui.questList->currentIndex().row();

	if (id >= 0)
	{
		exam->delQ(id);
		ui.questList->currentItem()->~QListWidgetItem();
	}
}

void AddExamDialog::on_questList_currentItemChanged()
{
	QListWidgetItem *curItem = ui.questList->currentItem();

	if (curItem) {
		ui.rightALabel->setText(curItem->data(Qt::UserRole).toString());
	}
	else
	{
		ui.rightALabel->setText(u8"<No item selected>");
	}
}

void AddExamDialog::on_changeButton_clicked()
{
	int id = ui.questList->currentIndex().row();

	if (id >= 0)
	{
		Question *currQuest = exam->get_quest(id);

		if (currQuest->get_map() != std::map<char, std::string>())
		{
			AddABQuestDialog *dialog = new AddABQuestDialog(currQuest, this);
			if (dialog->exec())
			{
				read_ab_dial(currQuest, dialog);
			}
			delete dialog;
		}
		else
		{
			AddToWrQuestDialog *dialog = new AddToWrQuestDialog(currQuest, this);
			if (dialog->exec())
			{
				read_tw_dial(currQuest, dialog);
			}
			delete dialog;
		}
	}
}

void AddExamDialog::read_ab_dial(Question * currQuest, AddABQuestDialog *dialog)
{
	std::string q = dialog->ui.questLine->document()->toRawText().toStdString();
	std::string ra = dialog->ui.RALine->text().toStdString();
	int rate = dialog->ui.rateLine->text().toInt();
	std::string a = dialog->ui.aLine->text().toStdString();
	std::string b = dialog->ui.bLine->text().toStdString();
	std::string c = dialog->ui.cLine->text().toStdString();
	std::string d = dialog->ui.dLine->text().toStdString();

	currQuest->set_question(q);
	currQuest->set_rightAnswer(ra);
	currQuest->set_rate(rate);
	currQuest->set_answers('a', a);
	currQuest->set_answers('b', b);
	currQuest->set_answers('c', c);
	currQuest->set_answers('d', d);
}

void AddExamDialog::read_tw_dial(Question * currQuest, AddToWrQuestDialog *dialog)
{
	std::string q = dialog->ui.questLine->document()->toRawText().toStdString();
	std::string ra = dialog->ui.RALine->text().toStdString();
	int rate = dialog->ui.rateLine->text().toInt();

	currQuest->set_question(q);
	currQuest->set_rightAnswer(ra);
	currQuest->set_rate(rate);
}

void AddExamDialog::add_item(Question * currQuest)
{
	const std::string questName = currQuest->get_question();
	QString str = QString::fromStdString(questName);
	QListWidgetItem *item = new QListWidgetItem(str, ui.questList);
	QString str1 = (u8"Правильный ответ: ");
	str1 += QString::fromStdString(currQuest->get_rightAnswer());
	str1 += u8"   Тип: ";
	if (currQuest->get_map() != std::map<char, std::string>())
		str1 += u8"тест";
	else
		str1 += u8"письменный";
	item->setData(Qt::UserRole, str1);
}
