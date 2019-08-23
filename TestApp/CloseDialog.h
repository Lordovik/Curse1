#ifndef CLOSEDIAL_H
#define CLOSEDIAL_H
#pragma once

#include <QDialog>
#include "ui_CloseDialog.h"

class CloseDialog : public QDialog
{
	Q_OBJECT

public:
	CloseDialog(QWidget *parent = Q_NULLPTR);
	~CloseDialog();
	Ui::CloseDialog ui;
public slots:
	void on_yesButton_clicked();
	void on_noButton_clicked();
	void on_cancelButton_clicked();
signals:
	void yes();
	void no();
};
#endif