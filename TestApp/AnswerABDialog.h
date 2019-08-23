#ifndef ANSWAB_H
#define ANSWAB_H
#pragma once
#include <QDialog>
#include "ui_AnswerABDialog.h"
#include "ABQuestion.h"
#include "qmessagebox.h"

class AnswerABDialog : public QDialog
{
	Q_OBJECT

public:
	AnswerABDialog(Question *quest, QWidget *parent = Q_NULLPTR);
	~AnswerABDialog();
	Ui::AnswerABDialog ui;

private slots:
	void on_okButton_clicked();
};
#endif