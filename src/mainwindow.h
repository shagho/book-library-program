#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "nash_books_table.h"
#include "nash_userinfo_table.h"
#include "nash_dialog1.h"
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

private slots:

    void on_actionLogin_triggered();

    void on_actionAbout_triggered();

    void on_actionquit_triggered();

    void UpdateTime();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

    QTimer *timer_1s;

    nash_userInfo_table ust;

    Nash_Dialog1 *nexp1;

};

#endif // MAINWINDOW_H
