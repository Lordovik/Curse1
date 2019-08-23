/********************************************************************************
** Form generated from reading UI file 'StudDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDDIALOG_H
#define UI_STUDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_StudDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *addButton;
    QLabel *dataLabel;
    QPushButton *delButton;
    QSpacerItem *verticalSpacer;
    QListWidget *studList;
    QLabel *label;

    void setupUi(QDialog *StudDialog)
    {
        if (StudDialog->objectName().isEmpty())
            StudDialog->setObjectName(QStringLiteral("StudDialog"));
        StudDialog->resize(462, 286);
        gridLayout = new QGridLayout(StudDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        addButton = new QPushButton(StudDialog);
        addButton->setObjectName(QStringLiteral("addButton"));

        gridLayout->addWidget(addButton, 1, 1, 1, 1);

        dataLabel = new QLabel(StudDialog);
        dataLabel->setObjectName(QStringLiteral("dataLabel"));

        gridLayout->addWidget(dataLabel, 4, 0, 1, 2);

        delButton = new QPushButton(StudDialog);
        delButton->setObjectName(QStringLiteral("delButton"));

        gridLayout->addWidget(delButton, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 188, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        studList = new QListWidget(StudDialog);
        studList->setObjectName(QStringLiteral("studList"));

        gridLayout->addWidget(studList, 1, 0, 3, 1);

        label = new QLabel(StudDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(StudDialog);

        QMetaObject::connectSlotsByName(StudDialog);
    } // setupUi

    void retranslateUi(QDialog *StudDialog)
    {
        StudDialog->setWindowTitle(QApplication::translate("StudDialog", "StudDialog", Q_NULLPTR));
        addButton->setText(QApplication::translate("StudDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        dataLabel->setText(QApplication::translate("StudDialog", "<No item selected>", Q_NULLPTR));
        delButton->setText(QApplication::translate("StudDialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        label->setText(QApplication::translate("StudDialog", "\320\243\321\207\320\265\320\275\320\270\320\272\320\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StudDialog: public Ui_StudDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDDIALOG_H
