/********************************************************************************
** Form generated from reading UI file 'AddExamDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEXAMDIALOG_H
#define UI_ADDEXAMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddExamDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *addTWButton;
    QLabel *label;
    QPushButton *addAbButton;
    QPushButton *okButton;
    QPushButton *delButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *rightALabel;
    QLabel *label_2;
    QListWidget *questList;
    QSpacerItem *verticalSpacer;
    QLineEdit *examEdit;
    QPushButton *changeButton;

    void setupUi(QDialog *AddExamDialog)
    {
        if (AddExamDialog->objectName().isEmpty())
            AddExamDialog->setObjectName(QStringLiteral("AddExamDialog"));
        AddExamDialog->resize(567, 403);
        gridLayout_2 = new QGridLayout(AddExamDialog);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        addTWButton = new QPushButton(AddExamDialog);
        addTWButton->setObjectName(QStringLiteral("addTWButton"));

        gridLayout->addWidget(addTWButton, 2, 2, 1, 1);

        label = new QLabel(AddExamDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        addAbButton = new QPushButton(AddExamDialog);
        addAbButton->setObjectName(QStringLiteral("addAbButton"));

        gridLayout->addWidget(addAbButton, 1, 2, 1, 1);

        okButton = new QPushButton(AddExamDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout->addWidget(okButton, 7, 2, 1, 1);

        delButton = new QPushButton(AddExamDialog);
        delButton->setObjectName(QStringLiteral("delButton"));

        gridLayout->addWidget(delButton, 5, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 2, 1, 1);

        rightALabel = new QLabel(AddExamDialog);
        rightALabel->setObjectName(QStringLiteral("rightALabel"));

        gridLayout->addWidget(rightALabel, 10, 0, 1, 3);

        label_2 = new QLabel(AddExamDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        questList = new QListWidget(AddExamDialog);
        questList->setObjectName(QStringLiteral("questList"));

        gridLayout->addWidget(questList, 1, 0, 9, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 2, 1, 1);

        examEdit = new QLineEdit(AddExamDialog);
        examEdit->setObjectName(QStringLiteral("examEdit"));

        gridLayout->addWidget(examEdit, 0, 1, 1, 1);

        changeButton = new QPushButton(AddExamDialog);
        changeButton->setObjectName(QStringLiteral("changeButton"));

        gridLayout->addWidget(changeButton, 3, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(AddExamDialog);

        QMetaObject::connectSlotsByName(AddExamDialog);
    } // setupUi

    void retranslateUi(QDialog *AddExamDialog)
    {
        AddExamDialog->setWindowTitle(QApplication::translate("AddExamDialog", "AddExamDialog", Q_NULLPTR));
        addTWButton->setText(QApplication::translate("AddExamDialog", "\320\237\320\270\321\201\321\214\320\274\320\265\320\275\320\275\321\213\320\271", Q_NULLPTR));
        label->setText(QApplication::translate("AddExamDialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265:", Q_NULLPTR));
        addAbButton->setText(QApplication::translate("AddExamDialog", "\320\242\320\265\321\201\321\202\320\276\320\262\321\213\320\271", Q_NULLPTR));
        okButton->setText(QApplication::translate("AddExamDialog", "OK", Q_NULLPTR));
        delButton->setText(QApplication::translate("AddExamDialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        rightALabel->setText(QApplication::translate("AddExamDialog", "<No item selected>", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddExamDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\320\276\320\277\321\200\320\276\321\201\321\213:", Q_NULLPTR));
        changeButton->setText(QApplication::translate("AddExamDialog", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddExamDialog: public Ui_AddExamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEXAMDIALOG_H
