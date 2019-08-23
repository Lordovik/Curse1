/********************************************************************************
** Form generated from reading UI file 'AddSubjectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSUBJECTDIALOG_H
#define UI_ADDSUBJECTDIALOG_H

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

class Ui_AddSubjectDialog
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *nameLine;

    void setupUi(QDialog *AddSubjectDialog)
    {
        if (AddSubjectDialog->objectName().isEmpty())
            AddSubjectDialog->setObjectName(QStringLiteral("AddSubjectDialog"));
        AddSubjectDialog->resize(423, 96);
        gridLayout_2 = new QGridLayout(AddSubjectDialog);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        okButton = new QPushButton(AddSubjectDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout_2->addWidget(okButton, 1, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(AddSubjectDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        nameLine = new QLineEdit(AddSubjectDialog);
        nameLine->setObjectName(QStringLiteral("nameLine"));

        gridLayout->addWidget(nameLine, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);


        retranslateUi(AddSubjectDialog);

        QMetaObject::connectSlotsByName(AddSubjectDialog);
    } // setupUi

    void retranslateUi(QDialog *AddSubjectDialog)
    {
        AddSubjectDialog->setWindowTitle(QApplication::translate("AddSubjectDialog", "AddSubjectDialog", Q_NULLPTR));
        okButton->setText(QApplication::translate("AddSubjectDialog", "OK", Q_NULLPTR));
        label->setText(QApplication::translate("AddSubjectDialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddSubjectDialog: public Ui_AddSubjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSUBJECTDIALOG_H
