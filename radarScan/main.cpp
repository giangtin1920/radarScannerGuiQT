#include "radarscan.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    radarScan w;
    w.show();
    return a.exec();
}
