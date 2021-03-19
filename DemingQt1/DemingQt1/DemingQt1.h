#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DemingQt1.h"
#include <QPixmap>

class DemingQt1 : public QMainWindow {

    Q_OBJECT


public:
    DemingQt1(QWidget* parent = Q_NULLPTR);

private:
    void paintEvent(QPaintEvent* event);
    void drawLines(QPainter* qp);

    Ui::DemingQt1Class ui;
    QPixmap pixmap;
};