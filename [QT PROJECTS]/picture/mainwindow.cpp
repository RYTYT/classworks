#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
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

void MainWindow::setPic(QString path)
{
    QPixmap pic = QPixmap();
    if (pic.load(path)) {
        pic = pic.scaled(ui->label->size(),Qt::KeepAspectRatio);
        ui->label->setPixmap(pic);
    }
    else {
        ui->label->setText("Bad Doge -_-");
    }
}

