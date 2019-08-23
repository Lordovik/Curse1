#ifndef STUDDIAL_H
#define STUDDIAL_H
#pragma once
#include <QDialog>
#include "ui_StudDialog.h"
#include "Student.h"
#include "qlistwidget.h"
#include "AddTeachDialog.h"
class StudDialog : public QDialog
{
	Q_OBJECT

public:
	StudDialog(Subject *subject[30], int subjCount, Person *teach[], int *persCount, QWidget *parent = Q_NULLPTR);
	~StudDialog();
	Ui::StudDialog ui;

private:
	Person **persons;
	int *persCount;
	Subject *subjects[30];
	int subjCount;
	std::string logins[100];
	int logCount;
public slots:
	void on_addButton_clicked();
	void on_delButton_clicked();
	void on_studList_currentItemChanged();
};
#endif