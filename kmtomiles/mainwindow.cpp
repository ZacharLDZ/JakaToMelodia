#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    QObject::connect(ui->textEdit,SIGNAL(textChanged()),this,SLOT(kmtom()));
    QObject::connect(ui->textEdit_2,SIGNAL(textChanged()),this,SLOT(mtokm()));
    delete ui;
}

void MainWindow::kmtom()
{
    double wynik = ui->textEdit->toPlainText().toFloat()*0.621371192;
    QVariant w(wynik);
    ui->textEdit_2->setText(w.toString());

}

void MainWindow::mtokm()
{
    double wynik = ui->textEdit_2->toPlainText().toFloat()*1.609344;
    QVariant w(wynik);
    ui->textEdit->setText(w.toString());


}


