#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setPic("C:\\Users\\Admin\\source\\repos\\Misha Folder\\[QT PROJECTS]\\dogeMood.jpg");
    w.show();

    return a.exec();
}
