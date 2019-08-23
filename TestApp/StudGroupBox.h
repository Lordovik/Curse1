#ifndef STUDGB_H
#define STUDGB_H
#pragma once
#include <QGroupBox>
#include "ui_StudGroupBox.h"
#include "qtabwidget.h"
#include "Subject.h"
#include "qlistwidget.h"
#include "AnswerABDialog.h"
#include "AnswerTWDialog.h"

class StudGroupBox : public QGroupBox
{
	Q_OBJECT

public:
	StudGroupBox(Subject *subj, QTabWidget *parent);
	~StudGroupBox();
	Ui::StudGroupBox ui;
private:
	Subject * subject;
	void add_item(Exam *ex);
private slots:
	void on_passButton_clicked();
};
#endif