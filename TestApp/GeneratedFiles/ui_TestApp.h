/********************************************************************************
** Form generated from reading UI file 'TestApp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTAPP_H
#define UI_TESTAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestAppClass
{
public:
    QAction *saveAction;
    QAction *logoutAction;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *subView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestAppClass)
    {
        if (TestAppClass->objectName().isEmpty())
            TestAppClass->setObjectName(QStringLiteral("TestAppClass"));
        TestAppClass->setEnabled(false);
        TestAppClass->resize(631, 453);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TestAppClass->sizePolicy().hasHeightForWidth());
        TestAppClass->setSizePolicy(sizePolicy);
        TestAppClass->setBaseSize(QSize(10, 10));
        saveAction = new QAction(TestAppClass);
        saveAction->setObjectName(QStringLiteral("saveAction"));
        logoutAction = new QAction(TestAppClass);
        logoutAction->setObjectName(QStringLiteral("logoutAction"));
        centralWidget = new QWidget(TestAppClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        subView = new QTabWidget(centralWidget);
        subView->setObjectName(QStringLiteral("subView"));

        gridLayout->addWidget(subView, 0, 0, 1, 1);

        TestAppClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TestAppClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 631, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        TestAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestAppClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TestAppClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TestAppClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TestAppClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menu->menuAction());
        menuFile->addAction(saveAction);
        menu->addAction(logoutAction);

        retranslateUi(TestAppClass);

        subView->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(TestAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *TestAppClass)
    {
        TestAppClass->setWindowTitle(QApplication::translate("TestAppClass", "TestApp", Q_NULLPTR));
        saveAction->setText(QApplication::translate("TestAppClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        saveAction->setShortcut(QApplication::translate("TestAppClass", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        logoutAction->setText(QApplication::translate("TestAppClass", "\320\222\321\213\320\271\321\202\320\270", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("TestAppClass", "\320\244\320\260\320\271\320\273", Q_NULLPTR));
        menu->setTitle(QApplication::translate("TestAppClass", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TestAppClass: public Ui_TestAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTAPP_H
