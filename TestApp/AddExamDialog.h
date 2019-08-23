#ifndef ADDEXDIL_H
#define ADDEXDIL_H
#pragma once
#include <QDialog>
#include "ui_AddExamDialog.h"
#include "AddABQuestDialog.h"
#include "AddToWrQuestDialog.h"
#include <typeindex>

class AddExamDialog : public QDialog
{
	Q_OBJECT

public:
	AddExamDialog(Exam *ex, QWidget *parent);
	~AddExamDialog();
	Ui::AddExamDialog ui;
private:
	Exam *exam;
	void read_ab_dial(Question *currQuest, AddABQuestDialog *dialog);
	void read_tw_dial(Question *currQuest, AddToWrQuestDialog *dialog);
	void add_item(Question *q);
public slots:
	void on_addAbButton_clicked();
	void on_addTWButton_clicked();
	void on_okButton_clicked();
	void on_delButton_clicked();
	void on_questList_currentItemChanged();
	void on_changeButton_clicked();
};
#endif