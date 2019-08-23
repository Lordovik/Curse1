#ifndef ANSWTW_H
#define ANSWtW_H
#pragma once
#include <QDialog>
#include "ui_AnswerTWDialog.h"
#include "ToWrQuestion.h"
#include "qmessagebox.h"

class AnswerTWDialog : public QDialog
{
	Q_OBJECT

public:
	AnswerTWDialog(Question *quest, QWidget *parent = Q_NULLPTR);
	~AnswerTWDialog();
	Ui::AnswerTWDialog ui;

private slots:
	void on_okButton_clicked();
};
#endif