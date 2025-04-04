#include "authorization.h"
#include "depositwindow.h"
#include "dumpwindow.h"
#include <QApplication>
#include <QLocale>
#include <QSqlDatabase>
#include <QTranslator>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    authorization w;
    w.show();
    return a.exec();
}
