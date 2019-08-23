/********************************************************************************
** Form generated from reading UI file 'TeachGroupBox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHGROUPBOX_H
#define UI_TEACHGROUPBOX_H

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

class Ui_TeachGroupBox
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *examData;
    QPushButton *addButton;
    QPushButton *delButton;
    QPushButton *changeButton;
    QSpacerItem *verticalSpacer;
    QListWidget *exList;
    QLabel *label;

    void setupUi(QGroupBox *TeachGroupBox)
    {
        if (TeachGroupBox->objectName().isEmpty())
            TeachGroupBox->setObjectName(QStringLiteral("TeachGroupBox"));
        TeachGroupBox->resize(518, 357);
        gridLayout_2 = new QGridLayout(TeachGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        examData = new QLabel(TeachGroupBox);
        examData->setObjectName(QStringLiteral("examData"));

        gridLayout->addWidget(examData, 6, 0, 1, 2);

        addButton = new QPushButton(TeachGroupBox);
        addButton->setObjectName(QStringLiteral("addButton"));

        gridLayout->addWidget(addButton, 1, 1, 1, 1);

        delButton = new QPushButton(TeachGroupBox);
        delButton->setObjectName(QStringLiteral("delButton"));

        gridLayout->addWidget(delButton, 5, 1, 1, 1);

        changeButton = new QPushButton(TeachGroupBox);
        changeButton->setObjectName(QStringLiteral("changeButton"));

        gridLayout->addWidget(changeButton, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        exList = new QListWidget(TeachGroupBox);
        exList->setObjectName(QStringLiteral("exList"));

        gridLayout->addWidget(exList, 1, 0, 5, 1);

        label = new QLabel(TeachGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        retranslateUi(TeachGroupBox);

        QMetaObject::connectSlotsByName(TeachGroupBox);
    } // setupUi

    void retranslateUi(QGroupBox *TeachGroupBox)
    {
        TeachGroupBox->setWindowTitle(QApplication::translate("TeachGroupBox", "TeachGroupBox", Q_NULLPTR));
        examData->setText(QApplication::translate("TeachGroupBox", "<No item selected>", Q_NULLPTR));
        addButton->setText(QApplication::translate("TeachGroupBox", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        delButton->setText(QApplication::translate("TeachGroupBox", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        changeButton->setText(QApplication::translate("TeachGroupBox", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", Q_NULLPTR));
        label->setText(QApplication::translate("TeachGroupBox", "\320\242\320\265\321\201\321\202\321\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TeachGroupBox: public Ui_TeachGroupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHGROUPBOX_H
