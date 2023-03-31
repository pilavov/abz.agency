#include "displayuserswindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DisplayUsersWindow w;
    w.show();
    return a.exec();
}


