/********************************************************************************
** Form generated from reading UI file 'AnswerABDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANSWERABDIALOG_H
#define UI_ANSWERABDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_AnswerABDialog
{
public:
    QGridLayout *gridLayout;
    QRadioButton *cRadio;
    QRadioButton *dRadio;
    QLabel *cLine;
    QLabel *dLine;
    QRadioButton *aRadio;
    QRadioButton *bRadio;
    QLabel *aLine;
    QTextBrowser *questText;
    QLabel *bLine;
    QPushButton *okButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *AnswerABDialog)
    {
        if (AnswerABDialog->objectName().isEmpty())
            AnswerABDialog->setObjectName(QStringLiteral("AnswerABDialog"));
        AnswerABDialog->resize(496, 212);
        gridLayout = new QGridLayout(AnswerABDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cRadio = new QRadioButton(AnswerABDialog);
        cRadio->setObjectName(QStringLiteral("cRadio"));
        cRadio->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(cRadio, 3, 0, 1, 1);

        dRadio = new QRadioButton(AnswerABDialog);
        dRadio->setObjectName(QStringLiteral("dRadio"));
        dRadio->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(dRadio, 4, 0, 1, 1);

        cLine = new QLabel(AnswerABDialog);
        cLine->setObjectName(QStringLiteral("cLine"));

        gridLayout->addWidget(cLine, 3, 1, 1, 2);

        dLine = new QLabel(AnswerABDialog);
        dLine->setObjectName(QStringLiteral("dLine"));

        gridLayout->addWidget(dLine, 4, 1, 1, 2);

        aRadio = new QRadioButton(AnswerABDialog);
        aRadio->setObjectName(QStringLiteral("aRadio"));
        aRadio->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(aRadio, 1, 0, 1, 1);

        bRadio = new QRadioButton(AnswerABDialog);
        bRadio->setObjectName(QStringLiteral("bRadio"));
        bRadio->setMaximumSize(QSize(40, 16777215));

        gridLayout->addWidget(bRadio, 2, 0, 1, 1);

        aLine = new QLabel(AnswerABDialog);
        aLine->setObjectName(QStringLiteral("aLine"));

        gridLayout->addWidget(aLine, 1, 1, 1, 2);

        questText = new QTextBrowser(AnswerABDialog);
        questText->setObjectName(QStringLiteral("questText"));

        gridLayout->addWidget(questText, 0, 0, 1, 3);

        bLine = new QLabel(AnswerABDialog);
        bLine->setObjectName(QStringLiteral("bLine"));

        gridLayout->addWidget(bLine, 2, 1, 1, 2);

        okButton = new QPushButton(AnswerABDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout->addWidget(okButton, 5, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 1, 1, 1);


        retranslateUi(AnswerABDialog);

        QMetaObject::connectSlotsByName(AnswerABDialog);
    } // setupUi

    void retranslateUi(QDialog *AnswerABDialog)
    {
        AnswerABDialog->setWindowTitle(QApplication::translate("AnswerABDialog", "AnswerABDialog", Q_NULLPTR));
        cRadio->setText(QApplication::translate("AnswerABDialog", "c", Q_NULLPTR));
        dRadio->setText(QApplication::translate("AnswerABDialog", "d", Q_NULLPTR));
        cLine->setText(QApplication::translate("AnswerABDialog", "c", Q_NULLPTR));
        dLine->setText(QApplication::translate("AnswerABDialog", "d", Q_NULLPTR));
        aRadio->setText(QApplication::translate("AnswerABDialog", "a", Q_NULLPTR));
        bRadio->setText(QApplication::translate("AnswerABDialog", "b", Q_NULLPTR));
        aLine->setText(QApplication::translate("AnswerABDialog", "a", Q_NULLPTR));
        bLine->setText(QApplication::translate("AnswerABDialog", "b", Q_NULLPTR));
        okButton->setText(QApplication::translate("AnswerABDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AnswerABDialog: public Ui_AnswerABDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANSWERABDIALOG_H
