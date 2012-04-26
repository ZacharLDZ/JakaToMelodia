#include <QtGui/QApplication>
#include <QTranslator>
#include <QLocale>
#include <QDebug>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator translator;
    qDebug() << translator.load(QLocale::English,QString("app"),QString("_"),QString("E:\\Zachar\\Dokumenty\\C++\\qt\\JakaToMelodia"));
    a.installTranslator(&translator);
    MainWindow w;
    w.show();
    
    return a.exec();
}
