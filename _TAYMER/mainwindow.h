#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    QTimer *tmr; //Адресная переменная таймера
    ~MainWindow();

private slots:
    void on_sleep_clicked();

    void on_shutdown_clicked();

    void reload(); //Слот для обновления времени на экране

    void on_switch_off_clicked();//Выход из приложения

    void obrab(QString command);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
