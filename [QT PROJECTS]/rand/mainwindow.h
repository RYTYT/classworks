#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int i = 0;

private slots:
    void on_pushButton_clicked();

    void on_label_2_windowIconTextChanged(const QString &iconText);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
