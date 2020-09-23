#include "poewr_key.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Poewr_Key w;
    w.show();

    return a.exec();
}
