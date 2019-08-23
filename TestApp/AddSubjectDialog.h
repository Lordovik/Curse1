#ifndef ADDSUBJ_H
#define ADDSUBJ_H
#pragma once
#include <QDialog>
#include "ui_AddSubjectDialog.h"
#include "qmessagebox.h"

class AddSubjectDialog : public QDialog
{
	Q_OBJECT

public:
	AddSubjectDialog(QWidget *parent = Q_NULLPTR);
	~AddSubjectDialog();
	Ui::AddSubjectDialog ui;

private slots:
	void on_okButton_clicked();
};
#endif