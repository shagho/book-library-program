#include "nash_dialog3.h"
#include "ui_nash_dialog3.h"

nash_Dialog3::nash_Dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nash_Dialog3)
{
    ui->setupUi(this);
}

void nash_Dialog3::showD2(int r,int c,QString d)
{
    ui->tableWidget->setItem(r,c,new QTableWidgetItem(d));
}

void nash_Dialog3::showD2(int r,int c,int d)
{
    QString tmp = QString::number(d);
    ui->tableWidget->setItem(r,c,new QTableWidgetItem(tmp));
}

void nash_Dialog3::showD2(int r,int c,long long int d)
{
    QString tmp = QString::number(d);
    ui->tableWidget->setItem(r,c,new QTableWidgetItem(tmp));
}

void nash_Dialog3::add_row(int i)
{
    ui->tableWidget->insertRow(i);
}

nash_Dialog3::~nash_Dialog3()
{
    delete ui;
}
