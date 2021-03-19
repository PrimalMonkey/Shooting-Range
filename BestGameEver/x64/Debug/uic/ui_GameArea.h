/********************************************************************************
** Form generated from reading UI file 'GameArea.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEAREA_H
#define UI_GAMEAREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameArea
{
public:

    void setupUi(QWidget *GameArea)
    {
        if (GameArea->objectName().isEmpty())
            GameArea->setObjectName(QString::fromUtf8("GameArea"));
        GameArea->resize(400, 300);
        GameArea->setMouseTracking(false);

        retranslateUi(GameArea);

        QMetaObject::connectSlotsByName(GameArea);
    } // setupUi

    void retranslateUi(QWidget *GameArea)
    {
        GameArea->setWindowTitle(QCoreApplication::translate("GameArea", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameArea: public Ui_GameArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEAREA_H
