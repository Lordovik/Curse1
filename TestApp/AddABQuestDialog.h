#ifndef ADDABQ_H
#define ADDABQ_H
#pragma once
#include <QDialog>
#include "ui_AddABQuestDialog.h"
#include "Teacher.h"
#include <qmessagebox.h>

class AddABQuestDialog : public QDialog
{
	Q_OBJECT

public:
	AddABQuestDialog(Question *quest, QWidget *parent);
	~AddABQuestDialog();
	Ui::AddABQuestDialog ui;
private:
	Question * question;
public slots:
	void on_aRadio_toggled(bool b);
	void on_bRadio_toggled(bool b);
	void on_cRadio_toggled(bool b);
	void on_dRadio_toggled(bool b);
	void on_cancelButton_clicked();
	void on_okButton_clicked();
	void on_RALine_textChanged(QString str);
};
#endif