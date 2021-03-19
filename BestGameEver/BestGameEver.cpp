#include "BestGameEver.h"

BestGameEver::BestGameEver(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

}

BestGameEver::~BestGameEver()
{
    QSettings settings("settings.ini", QSettings::IniFormat);
    settings.beginGroup("main");
    settings.setValue("score", ui.gameArea->GetScore());
}
