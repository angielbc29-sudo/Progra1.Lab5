#include "PruebaQT2.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    PruebaQT2 window;
    window.show();
    return app.exec();
}
