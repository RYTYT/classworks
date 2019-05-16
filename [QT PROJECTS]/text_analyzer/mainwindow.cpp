#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "textanalyzer.h"

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

void MainWindow::on_analyze_clicked()
{
QString text = ui->textEdit->toPlainText();
textAnalyzer.setText(text.toStdString());

ui->countLetters->setText(QString::number(textAnalyzer.countLetters()));
ui->countSentences->setText(QString::number(textAnalyzer.countSentences()));
ui->countWords->setText(QString::number(textAnalyzer.countWords()));
ui->countSymbols->setText(QString::number(textAnalyzer.countSymbols()));
}
