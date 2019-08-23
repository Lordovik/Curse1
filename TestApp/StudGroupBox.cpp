#include "StudGroupBox.h"

StudGroupBox::StudGroupBox(Subject *subj, QTabWidget *parent)
	: QGroupBox(parent)
{
	ui.setupUi(this);
	subject = subj;

	for (int i = 0; i < subj->get_examCount(); i++)
		add_item(subj->get_exam(i));
}

StudGroupBox::~StudGroupBox()
{
}

void StudGroupBox::add_item(Exam * ex)
{
	const std::string exName = ex->get_name();
	QString str = QString::fromStdString(exName);
	QListWidgetItem *item = new QListWidgetItem(str, ui.examList);
}

void StudGroupBox::on_passButton_clicked()
{
	int id = ui.examList->currentIndex().row();
	int rate = 0;

	if (id >= 0)
	{
		Exam *ex = subject->get_exam(id);
		for (int i = 0; i < ex->getQuestCount(); i++)
		{
			Question *q = ex->get_quest(i);
			if (q->get_map() != std::map<char, std::string>())
			{
				AnswerABDialog *dialog = new AnswerABDialog(q, this);
				if (dialog->exec())
				{
					std::string answ;
					if (dialog->ui.aRadio->isChecked())
						answ = dialog->ui.aLine->text().toStdString();
					else if (dialog->ui.bRadio->isChecked())
						answ = dialog->ui.bLine->text().toStdString();
					else if(dialog->ui.cRadio->isChecked())
						answ = dialog->ui.cLine->text().toStdString();
					else if (dialog->ui.dRadio->isChecked())
						answ = dialog->ui.dLine->text().toStdString();
					rate += q->answer(answ);
					delete dialog;
				}
				else {
					delete dialog;
					break;
				}
			}
			else
			{
				AnswerTWDialog *dialog = new AnswerTWDialog(q, this);
				if (dialog->exec())
				{
					std::string answ = dialog->ui.answerLine->text().toStdString();
					rate += q->answer(answ);
				}
				delete dialog;
			}
		}
	}

	QString str = u8"Вы набрали ";
	str += QString::number(rate);
	str += u8" из ";
	str += QString::number(subject->get_exam(id)->getRateSum());
	str += u8" баллов.";

	QMessageBox::information(this, u8"!!!", str, QMessageBox::Ok);
}
