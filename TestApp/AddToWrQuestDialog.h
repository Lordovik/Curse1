#ifndef ADDTWQ_H
#define ADDTWQ_H
#pragma once
#include <QDialog>
#include "ui_AddToWrQuestDialog.h"
#include "Teacher.h"
#include <qmessagebox.h>

class AddToWrQuestDialog : public QDialog
{
	Q_OBJECT

public:
	AddToWrQuestDialog(Question *quest, QWidget *parent);
	~AddToWrQuestDialog();
	Ui::AddToWrQuestDialog ui;
public slots:
	void on_cancelButton_clicked();
	void on_okButton_clicked();
private:
	Question * question;
};
#endif