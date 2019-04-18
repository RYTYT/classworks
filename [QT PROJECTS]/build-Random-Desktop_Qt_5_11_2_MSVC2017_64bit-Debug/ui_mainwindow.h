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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *RandNum;
    QLabel *label1;
    QTextBrowser *showRandNum;
    QLineEdit *from;
    QLineEdit *to;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(342, 378);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(342, 378));
        MainWindow->setMaximumSize(QSize(342, 378));
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        MainWindow->setAcceptDrops(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        RandNum = new QPushButton(centralWidget);
        RandNum->setObjectName(QStringLiteral("RandNum"));
        RandNum->setGeometry(QRect(130, 100, 81, 23));
        RandNum->setCursor(QCursor(Qt::PointingHandCursor));
        label1 = new QLabel(centralWidget);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setGeometry(QRect(50, 10, 241, 41));
        QFont font;
        font.setFamily(QStringLiteral("Monotype Corsiva"));
        font.setPointSize(12);
        font.setItalic(true);
        label1->setFont(font);
        label1->setFrameShadow(QFrame::Plain);
        label1->setAlignment(Qt::AlignCenter);
        showRandNum = new QTextBrowser(centralWidget);
        showRandNum->setObjectName(QStringLiteral("showRandNum"));
        showRandNum->setGeometry(QRect(120, 140, 101, 61));
        QFont font1;
        font1.setPointSize(10);
        showRandNum->setFont(font1);
        from = new QLineEdit(centralWidget);
        from->setObjectName(QStringLiteral("from"));
        from->setGeometry(QRect(50, 60, 113, 20));
        to = new QLineEdit(centralWidget);
        to->setObjectName(QStringLiteral("to"));
        to->setGeometry(QRect(180, 60, 113, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 342, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\240\320\260\320\275\320\264\320\276\320\274", nullptr));
        RandNum->setText(QApplication::translate("MainWindow", "\320\236\320\232", nullptr));
        label1->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\201\321\202\320\260\320\262\320\270\321\202\320\265 \320\277\321\200\320\265\320\264\320\265\320\273 \321\200\320\260\320\275\320\264\320\276\320\274\320\275\320\276\320\263\320\276 \321\207\320\270\321\201\320\273\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
