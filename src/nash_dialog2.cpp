#include "nash_dialog2.h"
#include "ui_nash_dialog2.h"

nash_Dialog2::nash_Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nash_Dialog2)
{
    ui->setupUi(this);
}

nash_Dialog2::~nash_Dialog2()
{
    delete ui;
}

void nash_Dialog2::showList(QString data)
{
    ui->listWidget->addItem(data);
}

nash_books nash_Dialog2::getTableArgument(nash_books tmp)
{
    return tmp;
}

QString nash_Dialog2::getListArgument()
{
    QString tmp = ui->listWidget->currentIndex().data().toString();
    return tmp;
}

void nash_Dialog2::setQmapG(QMap<QString, QList<nash_books> > tmp)
{
    Genre = tmp;
}

void nash_Dialog2::setQmapP(QMap<QString,QList< nash_books>> tmp)
{
    Publisher = tmp;
}

void nash_Dialog2::setQmapW(QMap<QString, QList<nash_books> > tmp)
{
    Writer = tmp;
}

void nash_Dialog2::setQmapY(QMap<int, QList<nash_books>> tmp)
{
    Year = tmp;
}

void nash_Dialog2::setTitle(QString title)
{
    ui->label_2->setText(title);
}

void nash_Dialog2::on_listWidget_activated(const QModelIndex &index)
{
    if(ui->label_2->text() == "Genres")
    {
        QString tmp = ui->listWidget->model()->data(index).toString();
        auto itr = Genre.find(tmp);
        int i = 0;
        nexp = new nash_Dialog3(this);
        nexp->show();
        for(auto itro = itr->begin();itro != itr->end();itro ++)
        {
            nexp->add_row(i);
            nexp->showD2(i,0,itro->getName());
            nexp->showD2(i,1,itro->getWriter());
            nexp->showD2(i,2,itro->getGenre());
            nexp->showD2(i,3,itro->getYear());
            nexp->showD2(i,4,itro->getSerial());
            nexp->showD2(i,5,itro->getPublisher());
            i++;
        }
        nexp->exec();
    }
    else if (ui->label_2->text() == "Years")
    {
        int tmp = ui->listWidget->model()->data(index).toInt();
        auto itr = Year.find(tmp);
        int i = 0;
        nexp = new nash_Dialog3(this);
        nexp->show();
        for(auto itro = itr->begin();itro != itr->end();itro ++)
        {
            nexp->add_row(i);
            nexp->showD2(i,0,itro->getName());
            nexp->showD2(i,1,itro->getWriter());
            nexp->showD2(i,2,itro->getGenre());
            nexp->showD2(i,3,itro->getYear());
            nexp->showD2(i,4,itro->getSerial());
            nexp->showD2(i,5,itro->getPublisher());
            i++;
        }
        nexp->exec();
    }
    else if(ui->label_2->text() == "Publishers")
    {
        QString tmp = ui->listWidget->model()->data(index).toString();
        auto itr = Publisher.find(tmp);
        int i = 0;
        nexp = new nash_Dialog3(this);
        nexp->show();
        for(auto itro = itr->begin();itro != itr->end();itro ++)
        {
            nexp->add_row(i);
            nexp->showD2(i,0,itro->getName());
            nexp->showD2(i,1,itro->getWriter());
            nexp->showD2(i,2,itro->getGenre());
            nexp->showD2(i,3,itro->getYear());
            nexp->showD2(i,4,itro->getSerial());
            nexp->showD2(i,5,itro->getPublisher());
            i++;
        }
        nexp->exec();
    }
    else if(ui->label_2->text() == "Writers")
    {
        QString tmp = ui->listWidget->model()->data(index).toString();
        auto itr = Writer.find(tmp);
        int i = 0;
        nexp = new nash_Dialog3(this);
        nexp->show();
        for(auto itro = itr->begin();itro != itr->end();itro ++)
        {
            nexp->add_row(i);
            nexp->showD2(i,0,itro->getName());
            nexp->showD2(i,1,itro->getWriter());
            nexp->showD2(i,2,itro->getGenre());
            nexp->showD2(i,3,itro->getYear());
            nexp->showD2(i,4,itro->getSerial());
            nexp->showD2(i,5,itro->getPublisher());
            i++;
        }
        nexp->exec();
    }
}

