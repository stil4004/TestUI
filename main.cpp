#include "mainwindow.h"
#include "mainscreen.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    MainScreen m;
    m.show();
    //w.show();

    return a.exec();
}
