#include "QtApp_Notepad.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtApp_Notepad w;
    w.show();
    return a.exec();
}
