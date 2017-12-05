/*
* This app has been created by T. Vardanyan
* Created Date is 05.12.2017
*/


#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow first_page;
    first_page.show();
    return a.exec();
}
