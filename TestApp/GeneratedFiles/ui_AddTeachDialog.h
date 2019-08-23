/********************************************************************************
** Form generated from reading UI file 'AddTeachDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTEACHDIALOG_H
#define UI_ADDTEACHDIALOG_H

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

class Ui_AddTeachDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *nameLine;
    QLabel *label_2;
    QLineEdit *loginLine;
    QLabel *label_3;
    QLineEdit *passwordLine;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;

    void setupUi(QDialog *AddTeachDialog)
    {
        if (AddTeachDialog->objectName().isEmpty())
            AddTeachDialog->setObjectName(QStringLiteral("AddTeachDialog"));
        AddTeachDialog->resize(400, 155);
        gridLayout_2 = new QGridLayout(AddTeachDialog);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(AddTeachDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        nameLine = new QLineEdit(AddTeachDialog);
        nameLine->setObjectName(QStringLiteral("nameLine"));

        gridLayout->addWidget(nameLine, 0, 1, 1, 1);

        label_2 = new QLabel(AddTeachDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        loginLine = new QLineEdit(AddTeachDialog);
        loginLine->setObjectName(QStringLiteral("loginLine"));

        gridLayout->addWidget(loginLine, 1, 1, 1, 1);

        label_3 = new QLabel(AddTeachDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        passwordLine = new QLineEdit(AddTeachDialog);
        passwordLine->setObjectName(QStringLiteral("passwordLine"));

        gridLayout->addWidget(passwordLine, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        okButton = new QPushButton(AddTeachDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout_2->addWidget(okButton, 1, 1, 1, 1);


        retranslateUi(AddTeachDialog);

        QMetaObject::connectSlotsByName(AddTeachDialog);
    } // setupUi

    void retranslateUi(QDialog *AddTeachDialog)
    {
        AddTeachDialog->setWindowTitle(QApplication::translate("AddTeachDialog", "AddTeachDialog", Q_NULLPTR));
        label->setText(QApplication::translate("AddTeachDialog", "\320\230\320\274\321\217:", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddTeachDialog", "\320\233\320\276\320\263\320\270\320\275:", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddTeachDialog", "\320\237\320\260\321\200\320\276\320\273\321\214:", Q_NULLPTR));
        okButton->setText(QApplication::translate("AddTeachDialog", "\320\236\320\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddTeachDialog: public Ui_AddTeachDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTEACHDIALOG_H
