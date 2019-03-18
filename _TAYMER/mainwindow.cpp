#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QProcess"
#include "QString"
#include "QTimer"
#include <QTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton->setChecked(true);
    tmr = new QTimer();
    tmr->setInterval(1000);
    connect(tmr, SIGNAL(timeout()), this, SLOT(updateTime()));
    tmr->start();
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_sleep_clicked(){
    QString command = "shutdown /h";
    obrab(command);
}

void MainWindow::on_shutdown_clicked(){
    QString command = "shutdown -s";
    obrab(command);
}

void MainWindow::reload(){
    if(ui->timeEdit->time().toString() == QTime::currentTime().toString() && ui->perezagr->isChecked()){
        QString command = "shutdown /r /t 000";
        obrab(command);
    }
}

void MainWindow::on_switch_off_clicked(){
    close();
}


void MainWindow::obrab(QString command){
    QProcess process;
    process.start("cmd.exe /C " + command);
    process.waitForFinished();
    process.waitForReadyRead();
}

