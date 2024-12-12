#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    setCounter(counter + 1);
    QString numberAsString = QString::number(counter);
    ui->label->setText("Painiketta Count painettu " + numberAsString + " kertaa");
    ui->txtResult->setText(numberAsString);
}

void MainWindow::setCounter(int newCounter)
{
    counter = newCounter;
}


void MainWindow::on_btnReset_clicked()
{
    setCounter(0);
    QString numberAsString = QString::number(counter);
    ui->label->setText("Painiketta Count painettu " + numberAsString + " kertaa");
    ui->txtResult->setText(numberAsString);
}

