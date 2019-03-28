#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QString>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    cout << "button pressed" << endl;
    ui->label_2->setText(QString::number(i));
    i++;
}

void MainWindow::on_label_2_windowIconTextChanged(const QString &iconText)
{

}
