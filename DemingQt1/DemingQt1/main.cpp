#include "DemingQt1.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[]) {

    QApplication app(argc, argv);

    DemingQt1 window;

    window.resize(720, 480);
    window.setWindowTitle("Deming");
    window.show();

    return app.exec();
}