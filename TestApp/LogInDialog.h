#ifndef LOGIND_H
#define LOGIND_H
#pragma once
#include <QDialog>
#include "ui_LogInDialog.h"

class LogInDialog : public QDialog
{
	Q_OBJECT

public:
	LogInDialog(QWidget *parent = Q_NULLPTR);
	~LogInDialog();
	Ui::LogInDialog ui;
public slots:
	void on_enterButton_clicked();
};
#endif