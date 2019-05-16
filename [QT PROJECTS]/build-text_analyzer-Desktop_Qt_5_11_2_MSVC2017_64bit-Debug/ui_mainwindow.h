/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *returnPrevious;
    QPushButton *analyze;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_3;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *countLetters;
    QLabel *countSymbols;
    QLabel *countWords;
    QLabel *countSentences;
    QLabel *label_10;
    QPushButton *replaceWords;
    QLineEdit *lineEdit_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(930, 604);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        returnPrevious = new QPushButton(centralWidget);
        returnPrevious->setObjectName(QStringLiteral("returnPrevious"));
        returnPrevious->setGeometry(QRect(50, 410, 91, 31));
        analyze = new QPushButton(centralWidget);
        analyze->setObjectName(QStringLiteral("analyze"));
        analyze->setGeometry(QRect(300, 410, 91, 31));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 30, 400, 350));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(580, 280, 141, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(520, 310, 51, 21));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(460, 30, 141, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(610, 30, 151, 111));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        countLetters = new QLabel(verticalLayoutWidget_2);
        countLetters->setObjectName(QStringLiteral("countLetters"));

        verticalLayout_2->addWidget(countLetters);

        countSymbols = new QLabel(verticalLayoutWidget_2);
        countSymbols->setObjectName(QStringLiteral("countSymbols"));

        verticalLayout_2->addWidget(countSymbols);

        countWords = new QLabel(verticalLayoutWidget_2);
        countWords->setObjectName(QStringLiteral("countWords"));

        verticalLayout_2->addWidget(countWords);

        countSentences = new QLabel(verticalLayoutWidget_2);
        countSentences->setObjectName(QStringLiteral("countSentences"));

        verticalLayout_2->addWidget(countSentences);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(470, 280, 111, 20));
        replaceWords = new QPushButton(centralWidget);
        replaceWords->setObjectName(QStringLiteral("replaceWords"));
        replaceWords->setGeometry(QRect(570, 350, 91, 31));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(580, 310, 141, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 930, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\220\320\275\320\260\320\273\321\226\320\267\320\260\321\202\320\276\321\200 \320\242\320\265\320\272\321\201\321\202\321\203", nullptr));
        returnPrevious->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\277\320\265\321\200\320\265\320\264\320\275\321\226\320\271", nullptr));
        analyze->setText(QApplication::translate("MainWindow", "\320\220\320\275\320\260\320\273\321\226\320\267\321\203\320\262\320\260\321\202\320\270", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\275\320\260 \321\201\320\273\320\276\320\262\320\276:", nullptr));
        label->setText(QApplication::translate("MainWindow", "              \320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\261\321\203\320\272\320\262:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "       \320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\320\270\320\274\320\262\320\276\320\273\320\276\320\262:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "               \320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\320\273\320\276\320\262:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", " \320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\321\200\320\265\320\264\320\273\320\276\320\266\320\265\320\275\320\270\320\271:", nullptr));
        countLetters->setText(QApplication::translate("MainWindow", " -", nullptr));
        countSymbols->setText(QApplication::translate("MainWindow", " -", nullptr));
        countWords->setText(QApplication::translate("MainWindow", " -", nullptr));
        countSentences->setText(QApplication::translate("MainWindow", " -", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\262\321\201\320\265 \321\201\320\273\320\276\320\262\320\260:", nullptr));
        replaceWords->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
