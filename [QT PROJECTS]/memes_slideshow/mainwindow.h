#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <vector>
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
    void setPic(QString filepath);
    void keyPressEvent(QKeyEvent *event);
    int currentImage = 0;
    int num = 2;
    vector<QString> *imagePaths;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
