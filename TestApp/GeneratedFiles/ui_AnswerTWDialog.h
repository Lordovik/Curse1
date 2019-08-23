/********************************************************************************
** Form generated from reading UI file 'AnswerTWDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANSWERTWDIALOG_H
#define UI_ANSWERTWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_AnswerTWDialog
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *questText;
    QLineEdit *answerLine;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;

    void setupUi(QDialog *AnswerTWDialog)
    {
        if (AnswerTWDialog->objectName().isEmpty())
            AnswerTWDialog->setObjectName(QStringLiteral("AnswerTWDialog"));
        AnswerTWDialog->resize(558, 258);
        gridLayout = new QGridLayout(AnswerTWDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        questText = new QTextBrowser(AnswerTWDialog);
        questText->setObjectName(QStringLiteral("questText"));

        gridLayout->addWidget(questText, 0, 0, 1, 2);

        answerLine = new QLineEdit(AnswerTWDialog);
        answerLine->setObjectName(QStringLiteral("answerLine"));

        gridLayout->addWidget(answerLine, 1, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(456, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        okButton = new QPushButton(AnswerTWDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout->addWidget(okButton, 2, 1, 1, 1);


        retranslateUi(AnswerTWDialog);

        QMetaObject::connectSlotsByName(AnswerTWDialog);
    } // setupUi

    void retranslateUi(QDialog *AnswerTWDialog)
    {
        AnswerTWDialog->setWindowTitle(QApplication::translate("AnswerTWDialog", "AnswerTWDialog", Q_NULLPTR));
        okButton->setText(QApplication::translate("AnswerTWDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AnswerTWDialog: public Ui_AnswerTWDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANSWERTWDIALOG_H
