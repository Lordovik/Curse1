#ifndef TEACHGB_H
#define TEACHGB_H
#pragma once
#include <qtabwidget.h>
#include <QGroupBox>
#include "ui_TeachGroupBox.h"
#include "AddExamDialog.h"
#include "TestApp.h"

class TeachGroupBox : public QGroupBox
{
	Q_OBJECT

public:
	TeachGroupBox(Subject *subj, QTabWidget *parent);
	~TeachGroupBox();
private:
	Subject * subject;
	Ui::TeachGroupBox ui;
	void read_ex_dial(Exam *ex, AddExamDialog *dialog);
	void add_item(Exam *ex);
public slots:
	void on_addButton_clicked();
	void on_exList_currentItemChanged();
	void on_changeButton_clicked();
	void on_delButton_clicked();
};
#endif