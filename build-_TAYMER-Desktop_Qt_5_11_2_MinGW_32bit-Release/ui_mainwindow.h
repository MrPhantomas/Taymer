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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTimeEdit *timeEdit;
    QRadioButton *perezagr;
    QPushButton *shutdown;
    QPushButton *switch_off;
    QRadioButton *radioButton;
    QLabel *label_3;
    QPushButton *sleep;
    QLabel *label_2;
    QLabel *label_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(324, 244);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        timeEdit = new QTimeEdit(centralWidget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(130, 120, 121, 22));
        perezagr = new QRadioButton(centralWidget);
        perezagr->setObjectName(QStringLiteral("perezagr"));
        perezagr->setGeometry(QRect(40, 150, 82, 17));
        shutdown = new QPushButton(centralWidget);
        shutdown->setObjectName(QStringLiteral("shutdown"));
        shutdown->setGeometry(QRect(40, 70, 201, 23));
        switch_off = new QPushButton(centralWidget);
        switch_off->setObjectName(QStringLiteral("switch_off"));
        switch_off->setGeometry(QRect(60, 180, 141, 23));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(150, 150, 91, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 100, 81, 16));
        sleep = new QPushButton(centralWidget);
        sleep->setObjectName(QStringLiteral("sleep"));
        sleep->setGeometry(QRect(40, 40, 201, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 10, 111, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 120, 101, 20));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        perezagr->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321\214", nullptr));
        shutdown->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260", nullptr));
        switch_off->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\267\320\260\320\263\321\200\321\203\320\267\320\272\320\260", nullptr));
        sleep->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200 \320\262 \320\241\320\276\320\275", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\241\321\203\320\277\320\265\321\200 \320\221\321\203\320\277\320\265\321\200 \321\202\320\260\320\271\320\274\320\265\321\200", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\277\320\265\321\200\320\265\320\267\320\260\320\263\321\200\321\203\320\267\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
