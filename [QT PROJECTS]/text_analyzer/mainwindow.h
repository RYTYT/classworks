#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<textanalyzer.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    TextAnalyzer textAnalyzer;
private slots:
    void on_analyze_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
