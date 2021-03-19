#pragma once

#include <QtWidgets>
#include <QtCore>
#include "ui_BestGameEver.h"

class BestGameEver : public QMainWindow
{
    Q_OBJECT

public:
    BestGameEver(QWidget *parent = Q_NULLPTR);
    ~BestGameEver();

private:
    Ui::BestGameEverClass ui;
};
