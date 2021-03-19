#include "BestGameEver.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BestGameEver w;
    w.show();
    return a.exec();
}
