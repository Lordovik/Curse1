/********************************************************************************
** Form generated from reading UI file 'AddToWrQuestDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTOWRQUESTDIALOG_H
#define UI_ADDTOWRQUESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddToWrQuestDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *RALine;
    QPlainTextEdit *questLine;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLineEdit *rateLine;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *AddToWrQuestDialog)
    {
        if (AddToWrQuestDialog->objectName().isEmpty())
            AddToWrQuestDialog->setObjectName(QStringLiteral("AddToWrQuestDialog"));
        AddToWrQuestDialog->resize(556, 173);
        gridLayout_2 = new QGridLayout(AddToWrQuestDialog);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(AddToWrQuestDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(AddToWrQuestDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        RALine = new QLineEdit(AddToWrQuestDialog);
        RALine->setObjectName(QStringLiteral("RALine"));

        gridLayout->addWidget(RALine, 1, 2, 1, 1);

        questLine = new QPlainTextEdit(AddToWrQuestDialog);
        questLine->setObjectName(QStringLiteral("questLine"));

        gridLayout->addWidget(questLine, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 5);

        horizontalSpacer = new QSpacerItem(161, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        label_3 = new QLabel(AddToWrQuestDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 1, 1, 1, 1);

        rateLine = new QLineEdit(AddToWrQuestDialog);
        rateLine->setObjectName(QStringLiteral("rateLine"));

        gridLayout_2->addWidget(rateLine, 1, 2, 1, 1);

        okButton = new QPushButton(AddToWrQuestDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout_2->addWidget(okButton, 1, 3, 1, 1);

        cancelButton = new QPushButton(AddToWrQuestDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        gridLayout_2->addWidget(cancelButton, 1, 4, 1, 1);


        retranslateUi(AddToWrQuestDialog);

        QMetaObject::connectSlotsByName(AddToWrQuestDialog);
    } // setupUi

    void retranslateUi(QDialog *AddToWrQuestDialog)
    {
        AddToWrQuestDialog->setWindowTitle(QApplication::translate("AddToWrQuestDialog", "AddToWrQuestDialog", Q_NULLPTR));
        label->setText(QApplication::translate("AddToWrQuestDialog", "\320\222\320\276\320\277\321\200\320\276\321\201:", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddToWrQuestDialog", "\320\237\321\200\320\260\320\262\320\270\320\273\321\214\320\275\321\213\320\271 \320\276\321\202\320\262\320\265\321\202:", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddToWrQuestDialog", "\320\221\320\260\320\273\320\273\321\213:", Q_NULLPTR));
        okButton->setText(QApplication::translate("AddToWrQuestDialog", "\320\236\320\232", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("AddToWrQuestDialog", "\320\236\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddToWrQuestDialog: public Ui_AddToWrQuestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTOWRQUESTDIALOG_H
