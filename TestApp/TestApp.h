#ifndef TESTAPP_H
#define TESTAPP_H
#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_TestApp.h"
#include "TeachGroupBox.h"
#include "Admin.h"
#include "Student.h"
#include "LogInDialog.h"
#include "AddSubjectDialog.h"
#include "AdminGroupBox.h"
#include "StudDialog.h"
#include "StudGroupBox.h"
#include "CloseDialog.h"
#define PERS_MAX_COUNT 100


class TestApp : public QMainWindow
{
	Q_OBJECT

	friend class TeachGroupBox;
public:
	TestApp(QWidget *parent = Q_NULLPTR);
	void save();
	void read();
	void fillForTeach(Person *teach);
	void fillForAdmin(Person *admin);
	void fillForStud(Person *stud);
	int get_subCount() const;
	Person *get_person(int i) const;
	Subject *get_subject(int i) const;
	void closeEvent(QCloseEvent * event);
	std::string get_subjname(int i) const;
private:
	std::string names_of_subjects[SUBJ_MAX_COUNT];
	Subject *subjects[SUBJ_MAX_COUNT];
	Person *persons[PERS_MAX_COUNT];
	int subjCount;
	int persCount;
	std::ifstream ifile;
	std::ofstream ofile;
	std::string filename;
	Ui::TestAppClass ui;
	bool check_subj(std::string name_);
	
public slots:
	void on_saveAction_triggered();
	void on_logoutAction_triggered();
	void log_in();
	void log_out();
	void add_subj();
	void del_subject();
	void open_studs();
	void ex_with_save();
	void ex();
signals:
	void logged_out();
};
#endif