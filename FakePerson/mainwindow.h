#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <string>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
string name;
string surname;
string country;
string profession;
int age;
string hobby;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
