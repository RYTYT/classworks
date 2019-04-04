#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <ctime>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
srand(time(NULL));

ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_RandNum_clicked()
{
    int from = (ui->from->text()).toInt();
    int to = (ui->to->text()).toInt();
    int random = rand() % (to-from+1)+from;
    ui->showRandNum->setText(QString::number(random));
}
