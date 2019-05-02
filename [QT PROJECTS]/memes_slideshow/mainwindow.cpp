#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include <QString>
#include <QKeyEvent>
#include <vector>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->imagePaths = new vector<QString>(num, "C:\\Users\\Admin\\source\\repos\\Misha Folder\\[QT PROJECTS]\\[-IMAGES-]\\Memes\\");
    (imagePaths->at(0)).append("0.jpg");
    (imagePaths->at(1)).append("1.jpg");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setPic(QString filepath)
{
    QPixmap pic = QPixmap();
    if (pic.load(filepath)) {
        pic = pic.scaled(ui->label->size(),Qt::KeepAspectRatio);
        ui->label->setPixmap(pic);
    }
    else {
        ui->label->setText("   error 404");
        cout << filepath.toStdString()  << endl;
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left) {
        cout << "left\n";
        if (currentImage != 0) {
        currentImage--;
        }
        else {
            currentImage = num-1;
        }
    }
    if (event->key() == Qt::Key_Right) {
        cout << "right\n";
        currentImage++;
        if (currentImage == (num)) {
        currentImage = 0;
        }

    }
    setPic(imagePaths->at(currentImage));
}
