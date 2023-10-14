/********************************************************************************
** Form generated from reading UI file 'scribble.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCRIBBLE_H
#define UI_SCRIBBLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_scribbleClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *scribbleClass)
    {
        if (scribbleClass->objectName().isEmpty())
            scribbleClass->setObjectName(QString::fromUtf8("scribbleClass"));
        scribbleClass->resize(600, 400);
        menuBar = new QMenuBar(scribbleClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        scribbleClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(scribbleClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        scribbleClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(scribbleClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        scribbleClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(scribbleClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        scribbleClass->setStatusBar(statusBar);

        retranslateUi(scribbleClass);

        QMetaObject::connectSlotsByName(scribbleClass);
    } // setupUi

    void retranslateUi(QMainWindow *scribbleClass)
    {
        scribbleClass->setWindowTitle(QCoreApplication::translate("scribbleClass", "scribble", nullptr));
    } // retranslateUi

};

namespace Ui {
    class scribbleClass: public Ui_scribbleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCRIBBLE_H
