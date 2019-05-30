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
    string Mname[5] = { "Аарон", "Орландо", "Рамзес", "Юлий", "Иван" };
    string Fname[5] = { "Беатрис", "Вероника", "Изабелла", "Яна", "Астрид" };
    string Msurname[5] = { "Победитель", "Кендри", "Цениров", "Прилод", "Шанаров" };
    string Fsurname[5] = { "Некрона", "Канарка", "Цепик", "Велертина", "Зелемляна" };
    string country[5] = { "Украина", "Юганда", "Италия", "Китай", "США" };
    string profession[5] = { "Адвокат", "Бармен", "Диджей", "Хирург", "Программист" };
    int age[5] = { 55, 32, 15, 19, 28 };
    string hobby[5] = { "Нравится играть на музыкальных инструментах.", "Увлекается написанием стихов и рисованием.", " Любит разгадывать кроссворды.", "Занимается дайвингом и сёрфингом.", "Обожает киберспорт и блогинг." };
    int random;
    int gender;
    string textOnBrowser;

private slots:
void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
