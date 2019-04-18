#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(changeButtons()));
    timer->start(500);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if (goodButt == 0) {
    points++;
}
    else {
        points--;
    }
    ui->label_2->setText(QString::number(points));
}

void MainWindow::on_pushButton_2_clicked()
{
    if (goodButt == 1) {
    points++;
    }
    else {
        points--;
    }
    ui->label_2->setText(QString::number(points));
}

void MainWindow::changeButtons()
{
    goodButt = rand() % 2;
    if (goodButt == 0) {
     ui->pushButton->setStyleSheet("background-color: green");
     ui->pushButton_2->setStyleSheet("background-color: red");
    }
    else {
     ui->pushButton->setStyleSheet("background-color: red");
     ui->pushButton_2->setStyleSheet("background-color: green");
    }
}
