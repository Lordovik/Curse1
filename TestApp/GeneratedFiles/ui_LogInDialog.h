/********************************************************************************
** Form generated from reading UI file 'LogInDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_LogInDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *loginLine;
    QLabel *label_2;
    QLineEdit *passwordLine;
    QSpacerItem *horizontalSpacer;
    QPushButton *enterButton;

    void setupUi(QDialog *LogInDialog)
    {
        if (LogInDialog->objectName().isEmpty())
            LogInDialog->setObjectName(QStringLiteral("LogInDialog"));
        LogInDialog->resize(502, 142);
        gridLayout_2 = new QGridLayout(LogInDialog);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(LogInDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        loginLine = new QLineEdit(LogInDialog);
        loginLine->setObjectName(QStringLiteral("loginLine"));

        gridLayout->addWidget(loginLine, 0, 1, 1, 1);

        label_2 = new QLabel(LogInDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        passwordLine = new QLineEdit(LogInDialog);
        passwordLine->setObjectName(QStringLiteral("passwordLine"));

        gridLayout->addWidget(passwordLine, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(400, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        enterButton = new QPushButton(LogInDialog);
        enterButton->setObjectName(QStringLiteral("enterButton"));

        gridLayout_2->addWidget(enterButton, 1, 1, 1, 1);


        retranslateUi(LogInDialog);

        QMetaObject::connectSlotsByName(LogInDialog);
    } // setupUi

    void retranslateUi(QDialog *LogInDialog)
    {
        LogInDialog->setWindowTitle(QApplication::translate("LogInDialog", "LogInDialog", Q_NULLPTR));
        label->setText(QApplication::translate("LogInDialog", "\320\233\320\276\320\263\320\270\320\275:", Q_NULLPTR));
        label_2->setText(QApplication::translate("LogInDialog", "\320\237\320\260\321\200\320\276\320\273\321\214:", Q_NULLPTR));
        enterButton->setText(QApplication::translate("LogInDialog", "\320\222\321\205\320\276\320\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogInDialog: public Ui_LogInDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
