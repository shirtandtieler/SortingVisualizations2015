#include "mainwindow.h"
#include <QApplication>


// start the application
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
