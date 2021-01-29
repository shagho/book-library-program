#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <QLabel>
#include <QTimer>
#include <QTime>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd("65578876d4f20e96.jpg");
        bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
        QPalette palette;
        palette.setBrush(QPalette::Background, bkgnd);
        this->setPalette(palette);

    timer_1s = new QTimer(this);
    QObject::connect(timer_1s, SIGNAL(timeout()), this, SLOT(UpdateTime()));
    timer_1s->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionLogin_triggered()
{
    QMessageBox msgBox;
    msgBox.setText("The document has been modified.");
    msgBox.exec();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox msgBox;
    msgBox.setText("This program is for a library management!");
    msgBox.exec();
}

void MainWindow::on_actionquit_triggered()
{
    QApplication::quit();
}

void MainWindow::UpdateTime()
{
    ui->label->setText(QTime::currentTime().toString("hh:mm:ss"));
}

void MainWindow::on_pushButton_clicked()
{
    QString userName = ui->lineEdit->text();
    QString password = ui->lineEdit_3->text();
    if(ust.contains(userName))
    {
        QMessageBox::information(this,"Create an account","This username has already been registered");
    }
    else
    {
        nash_userInfo a(userName,password);
        ust.insert(userName,a);
        nexp1 = new Nash_Dialog1(this);
        nexp1->show();
        nexp1->exec();
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    QString userName = ui->lineEdit->text();
    QString password = ui->lineEdit_3->text();
    if(ust.contains(userName) && ust[userName].getPassWord() == password)
    {
        nexp1 = new Nash_Dialog1(this);
        nexp1->show();
        nexp1->showTable();
        nexp1->exec();
    }
    else
    {
        QMessageBox::information(this,"Login","Invalid username or password");
    }
}
