#ifndef ADDTEACH_H
#define ADDTEACH_H
#pragma once
#include <QDialog>
#include "ui_AddTeachDialog.h"
#include "qmessagebox.h"

class AddTeachDialog : public QDialog
{
	Q_OBJECT

public:
	AddTeachDialog(QWidget *parent = Q_NULLPTR);
	~AddTeachDialog();

	Ui::AddTeachDialog ui;
private:

	public slots:
	void on_okButton_clicked();
};
#endif