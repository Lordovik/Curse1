/********************************************************************************
** Form generated from reading UI file 'AddABQuestDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDABQUESTDIALOG_H
#define UI_ADDABQUESTDIALOG_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddABQuestDialog
{
public:
    QGridLayout *gridLayout_2;
    QLineEdit *rateLine;
    QPushButton *okButton;
    QLabel *label_3;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *label;
    QRadioButton *bRadio;
    QRadioButton *dRadio;
    QRadioButton *cRadio;
    QRadioButton *aRadio;
    QLineEdit *aLine;
    QLineEdit *bLine;
    QLineEdit *cLine;
    QLabel *label_2;
    QLineEdit *dLine;
    QLineEdit *RALine;
    QPlainTextEdit *questLine;

    void setupUi(QDialog *AddABQuestDialog)
    {
        if (AddABQuestDialog->objectName().isEmpty())
            AddABQuestDialog->setObjectName(QStringLiteral("AddABQuestDialog"));
        AddABQuestDialog->setEnabled(true);
        AddABQuestDialog->resize(582, 288);
        gridLayout_2 = new QGridLayout(AddABQuestDialog);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        rateLine = new QLineEdit(AddABQuestDialog);
        rateLine->setObjectName(QStringLiteral("rateLine"));

        gridLayout_2->addWidget(rateLine, 2, 2, 1, 1);

        okButton = new QPushButton(AddABQuestDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout_2->addWidget(okButton, 2, 3, 1, 1);

        label_3 = new QLabel(AddABQuestDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 1, 1, 1);

        cancelButton = new QPushButton(AddABQuestDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        gridLayout_2->addWidget(cancelButton, 2, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(AddABQuestDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        bRadio = new QRadioButton(AddABQuestDialog);
        bRadio->setObjectName(QStringLiteral("bRadio"));

        gridLayout->addWidget(bRadio, 3, 1, 1, 1);

        dRadio = new QRadioButton(AddABQuestDialog);
        dRadio->setObjectName(QStringLiteral("dRadio"));
        dRadio->setChecked(false);

        gridLayout->addWidget(dRadio, 5, 1, 1, 1);

        cRadio = new QRadioButton(AddABQuestDialog);
        cRadio->setObjectName(QStringLiteral("cRadio"));

        gridLayout->addWidget(cRadio, 4, 1, 1, 1);

        aRadio = new QRadioButton(AddABQuestDialog);
        aRadio->setObjectName(QStringLiteral("aRadio"));
        aRadio->setCheckable(true);
        aRadio->setChecked(false);

        gridLayout->addWidget(aRadio, 2, 1, 1, 1);

        aLine = new QLineEdit(AddABQuestDialog);
        aLine->setObjectName(QStringLiteral("aLine"));
        aLine->setEnabled(true);

        gridLayout->addWidget(aLine, 2, 2, 1, 2);

        bLine = new QLineEdit(AddABQuestDialog);
        bLine->setObjectName(QStringLiteral("bLine"));

        gridLayout->addWidget(bLine, 3, 2, 1, 2);

        cLine = new QLineEdit(AddABQuestDialog);
        cLine->setObjectName(QStringLiteral("cLine"));

        gridLayout->addWidget(cLine, 4, 2, 1, 2);

        label_2 = new QLabel(AddABQuestDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        dLine = new QLineEdit(AddABQuestDialog);
        dLine->setObjectName(QStringLiteral("dLine"));

        gridLayout->addWidget(dLine, 5, 2, 1, 2);

        RALine = new QLineEdit(AddABQuestDialog);
        RALine->setObjectName(QStringLiteral("RALine"));

        gridLayout->addWidget(RALine, 1, 2, 1, 2);

        questLine = new QPlainTextEdit(AddABQuestDialog);
        questLine->setObjectName(QStringLiteral("questLine"));

        gridLayout->addWidget(questLine, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 5);


        retranslateUi(AddABQuestDialog);

        QMetaObject::connectSlotsByName(AddABQuestDialog);
    } // setupUi

    void retranslateUi(QDialog *AddABQuestDialog)
    {
        AddABQuestDialog->setWindowTitle(QApplication::translate("AddABQuestDialog", "AddABQuestDialog", Q_NULLPTR));
        okButton->setText(QApplication::translate("AddABQuestDialog", "\320\236\320\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddABQuestDialog", "\320\221\320\260\320\273\320\273\321\213:", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("AddABQuestDialog", "\320\236\321\202\320\274\320\265\320\275\320\260", Q_NULLPTR));
        label->setText(QApplication::translate("AddABQuestDialog", "\320\222\320\276\320\277\321\200\320\276\321\201:", Q_NULLPTR));
        bRadio->setText(QApplication::translate("AddABQuestDialog", "b", Q_NULLPTR));
        dRadio->setText(QApplication::translate("AddABQuestDialog", "d", Q_NULLPTR));
        cRadio->setText(QApplication::translate("AddABQuestDialog", "c", Q_NULLPTR));
        aRadio->setText(QApplication::translate("AddABQuestDialog", "a", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddABQuestDialog", "\320\237\321\200\320\260\320\262\320\270\320\273\321\214\320\275\321\213\320\271 \320\276\321\202\320\262\320\265\321\202:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddABQuestDialog: public Ui_AddABQuestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDABQUESTDIALOG_H
