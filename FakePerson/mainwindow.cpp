#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <ctime>
#include <QString>

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

void MainWindow::on_pushButton_clicked()
{
ui->textBrowser->clear();
textOnBrowser = "";
gender = rand()%2;
textOnBrowser = textOnBrowser + " Имя: ";
random = rand()%5;
if (gender == 0) {
textOnBrowser = textOnBrowser + Mname[random];
}
else {
textOnBrowser = textOnBrowser + Fname[random];
}
random = rand()%5;
if (gender == 0) {
textOnBrowser = textOnBrowser + "\n Фамилия: " + Msurname[random];
}
else {
    textOnBrowser = textOnBrowser + "\n Фамилия: " + Fsurname[random];
}
random = rand()%5;
textOnBrowser = textOnBrowser + "\n Возраст: " + to_string(age[random]) + " лет";
random = rand()%5;
textOnBrowser = textOnBrowser + "\n Страна проживания: " + country[random];
random = rand()%5;
textOnBrowser = textOnBrowser + "\n Професия: " + profession[random];
random = rand()%5;
textOnBrowser = textOnBrowser + "\n Хобби: " + hobby[random];
random = rand();
textOnBrowser = textOnBrowser + "\n-_-_-_-_-" + to_string(random) + "-_-_-_-_-\n\n";

ui->textBrowser->setPlainText(QString::fromStdString(textOnBrowser));
}
