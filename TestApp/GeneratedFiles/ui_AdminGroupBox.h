/********************************************************************************
** Form generated from reading UI file 'AdminGroupBox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINGROUPBOX_H
#define UI_ADMINGROUPBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AdminGroupBox
{
public:
    QGridLayout *gridLayout;
    QPushButton *dsButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *addButton;
    QPushButton *delButton;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QListWidget *teachList;
    QLabel *dataLabel;

    void setupUi(QGroupBox *AdminGroupBox)
    {
        if (AdminGroupBox->objectName().isEmpty())
            AdminGroupBox->setObjectName(QStringLiteral("AdminGroupBox"));
        AdminGroupBox->resize(496, 300);
        gridLayout = new QGridLayout(AdminGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        dsButton = new QPushButton(AdminGroupBox);
        dsButton->setObjectName(QStringLiteral("dsButton"));

        gridLayout->addWidget(dsButton, 6, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 0, 1, 1);

        addButton = new QPushButton(AdminGroupBox);
        addButton->setObjectName(QStringLiteral("addButton"));

        gridLayout->addWidget(addButton, 1, 3, 1, 1);

        delButton = new QPushButton(AdminGroupBox);
        delButton->setObjectName(QStringLiteral("delButton"));

        gridLayout->addWidget(delButton, 2, 3, 1, 1);

        verticalSpacer = new QSpacerItem(48, 171, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 3, 1, 1);

        label = new QLabel(AdminGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 6, 2, 1, 1);

        teachList = new QListWidget(AdminGroupBox);
        teachList->setObjectName(QStringLiteral("teachList"));

        gridLayout->addWidget(teachList, 1, 0, 4, 3);

        dataLabel = new QLabel(AdminGroupBox);
        dataLabel->setObjectName(QStringLiteral("dataLabel"));

        gridLayout->addWidget(dataLabel, 5, 0, 1, 4);


        retranslateUi(AdminGroupBox);

        QMetaObject::connectSlotsByName(AdminGroupBox);
    } // setupUi

    void retranslateUi(QGroupBox *AdminGroupBox)
    {
        AdminGroupBox->setWindowTitle(QApplication::translate("AdminGroupBox", "AdminGroupBox", Q_NULLPTR));
        dsButton->setText(QApplication::translate("AdminGroupBox", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\277\321\200\320\265\320\264\320\274\320\265\321\202", Q_NULLPTR));
        addButton->setText(QApplication::translate("AdminGroupBox", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        delButton->setText(QApplication::translate("AdminGroupBox", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        label->setText(QApplication::translate("AdminGroupBox", "\320\243\321\207\320\270\321\202\320\265\320\273\321\217", Q_NULLPTR));
        dataLabel->setText(QApplication::translate("AdminGroupBox", "<No item selected>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminGroupBox: public Ui_AdminGroupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINGROUPBOX_H
