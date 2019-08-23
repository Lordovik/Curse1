/********************************************************************************
** Form generated from reading UI file 'StudGroupBox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDGROUPBOX_H
#define UI_STUDGROUPBOX_H

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

class Ui_StudGroupBox
{
public:
    QGridLayout *gridLayout;
    QPushButton *passButton;
    QSpacerItem *verticalSpacer;
    QListWidget *examList;
    QLabel *label;

    void setupUi(QGroupBox *StudGroupBox)
    {
        if (StudGroupBox->objectName().isEmpty())
            StudGroupBox->setObjectName(QStringLiteral("StudGroupBox"));
        StudGroupBox->resize(400, 300);
        gridLayout = new QGridLayout(StudGroupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        passButton = new QPushButton(StudGroupBox);
        passButton->setObjectName(QStringLiteral("passButton"));

        gridLayout->addWidget(passButton, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 248, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        examList = new QListWidget(StudGroupBox);
        examList->setObjectName(QStringLiteral("examList"));

        gridLayout->addWidget(examList, 1, 0, 2, 1);

        label = new QLabel(StudGroupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(StudGroupBox);

        QMetaObject::connectSlotsByName(StudGroupBox);
    } // setupUi

    void retranslateUi(QGroupBox *StudGroupBox)
    {
        StudGroupBox->setWindowTitle(QApplication::translate("StudGroupBox", "StudGroupBox", Q_NULLPTR));
        passButton->setText(QApplication::translate("StudGroupBox", "\320\237\321\200\320\276\320\271\321\202\320\270", Q_NULLPTR));
        label->setText(QApplication::translate("StudGroupBox", "\320\242\320\265\321\201\321\202\321\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StudGroupBox: public Ui_StudGroupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDGROUPBOX_H
