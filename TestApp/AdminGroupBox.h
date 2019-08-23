#ifndef ADMINGB_H
#define ADMINGB_H
#pragma once
#include <QGroupBox>
#include "ui_AdminGroupBox.h"
#include "TestApp.h"
#include "AddTeachDialog.h"

class AdminGroupBox : public QGroupBox
{
	Q_OBJECT

public:
	AdminGroupBox(Subject *subj[SUBJ_MAX_COUNT], int id, Person *teach[], int *persCount, QWidget *parent);
	~AdminGroupBox();

private:
	Ui::AdminGroupBox ui;
	Person **persons;
	int *persCount;
	std::string logins[100];
	int logCount;
	Subject *subjects[SUBJ_MAX_COUNT];
	int id;
public slots:
	void on_addButton_clicked();
	void on_delButton_clicked();
	void on_teachList_currentItemChanged();
	void on_dsButton_clicked();
signals:
	void del_subj();
};
#endif