/********************************************************************************
** Form generated from reading UI file 'CloseDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOSEDIALOG_H
#define UI_CLOSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_CloseDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *yesButton;
    QPushButton *noButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *CloseDialog)
    {
        if (CloseDialog->objectName().isEmpty())
            CloseDialog->setObjectName(QStringLiteral("CloseDialog"));
        CloseDialog->resize(310, 131);
        gridLayout = new QGridLayout(CloseDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        label = new QLabel(CloseDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(72, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(46, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 2);

        yesButton = new QPushButton(CloseDialog);
        yesButton->setObjectName(QStringLiteral("yesButton"));

        gridLayout->addWidget(yesButton, 1, 2, 1, 1);

        noButton = new QPushButton(CloseDialog);
        noButton->setObjectName(QStringLiteral("noButton"));

        gridLayout->addWidget(noButton, 1, 3, 1, 1);

        cancelButton = new QPushButton(CloseDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        gridLayout->addWidget(cancelButton, 1, 4, 1, 1);


        retranslateUi(CloseDialog);

        QMetaObject::connectSlotsByName(CloseDialog);
    } // setupUi

    void retranslateUi(QDialog *CloseDialog)
    {
        CloseDialog->setWindowTitle(QApplication::translate("CloseDialog", "CloseDialog", Q_NULLPTR));
        label->setText(QApplication::translate("CloseDialog", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\277\320\265\321\200\320\265\320\264 \320\262\321\213\321\205\320\276\320\264\320\276\320\274?", Q_NULLPTR));
        yesButton->setText(QApplication::translate("CloseDialog", "\320\224\320\260", Q_NULLPTR));
        noButton->setText(QApplication::translate("CloseDialog", "\320\235\320\265\321\202", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("CloseDialog", "\320\236\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CloseDialog: public Ui_CloseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOSEDIALOG_H
