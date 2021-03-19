/********************************************************************************
** Form generated from reading UI file 'BestGameEver.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BESTGAMEEVER_H
#define UI_BESTGAMEEVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "gamearea.h"

QT_BEGIN_NAMESPACE

class Ui_BestGameEverClass
{
public:
    QWidget *centralWidget;
    GameArea *gameArea;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BestGameEverClass)
    {
        if (BestGameEverClass->objectName().isEmpty())
            BestGameEverClass->setObjectName(QString::fromUtf8("BestGameEverClass"));
        BestGameEverClass->resize(1341, 846);
        BestGameEverClass->setCursor(QCursor(Qt::CrossCursor));
        centralWidget = new QWidget(BestGameEverClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gameArea = new GameArea(centralWidget);
        gameArea->setObjectName(QString::fromUtf8("gameArea"));
        gameArea->setGeometry(QRect(0, 0, 1041, 781));
        gameArea->setFrameShape(QFrame::Box);
        gameArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        BestGameEverClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BestGameEverClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1341, 21));
        BestGameEverClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BestGameEverClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        BestGameEverClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BestGameEverClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        BestGameEverClass->setStatusBar(statusBar);

        retranslateUi(BestGameEverClass);

        QMetaObject::connectSlotsByName(BestGameEverClass);
    } // setupUi

    void retranslateUi(QMainWindow *BestGameEverClass)
    {
        BestGameEverClass->setWindowTitle(QCoreApplication::translate("BestGameEverClass", "BestGameEver", nullptr));
        gameArea->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BestGameEverClass: public Ui_BestGameEverClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BESTGAMEEVER_H
