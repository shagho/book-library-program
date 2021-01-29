#include "nash_dialog1.h"
#include "ui_nash_dialog1.h"
#include <QDialog>
#include <QString>
#include <QLineEdit>
#include <QMessageBox>
#include <QPixmap>
#include <QTimer>
#include <QTime>

Nash_Dialog1::Nash_Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nash_Dialog1)
{
    ui->setupUi(this);
    QPixmap bkgnd("mockup-laptop-wood-table-with-blurred-many-books-library-background_42682-227.jpg");
    bkgnd = bkgnd.scaled((*this).QWidget::size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    timer_1s = new QTimer(this);
    QObject::connect(timer_1s, SIGNAL(timeout()), this, SLOT(UpdateTime()));
    timer_1s->start(1000);
}

Nash_Dialog1::~Nash_Dialog1()
{
    delete ui;
}

void Nash_Dialog1::showD2(int r,int c,QString d)
{
    ui->tableWidget->setItem(r,c,new QTableWidgetItem(d));
}

void Nash_Dialog1::showD2(int r,int c,int d)
{
    QString tmp = QString::number(d);
    ui->tableWidget->setItem(r,c,new QTableWidgetItem(tmp));
}

void Nash_Dialog1::showD2(int r,int c,long long int d)
{
    QString tmp = QString::number(d);
    ui->tableWidget->setItem(r,c,new QTableWidgetItem(tmp));
}

void Nash_Dialog1::showTable()
{

    auto itr = this->btt.begin();
    for(int i=0;i<this->btt.size();i++)
    {
        this->AddRows(i);
        this->showD2(i,0,itr->getName());
        this->showD2(i,1,itr->getWriter());
        this->showD2(i,2,itr->getGenre());
        this->showD2(i,3,itr->getYear());
        this->showD2(i,4,itr->getSerial());
        this->showD2(i,5,itr->getPublisher());
        itr++;
    }
    int i = 0;
    for(auto itr = btt.begin(); itr != btt.end() ;itr++)
    {
        for(auto itrs = this->begin(); itrs != this->end() ;itrs++)
        {
            if(itrs->contains(itr->getName()))
            {
                this->showD2(i,6,itrs.key());
                break;
            }
        }
        i++;
    }
}

void Nash_Dialog1::AddRows(int r)
{
    ui->tableWidget->insertRow(r);
}

void Nash_Dialog1::RemoveAllRows()
{
    int tmp = ui->tableWidget->rowCount();
    for(int i=tmp-1;i>-1;i--)
        ui->tableWidget->removeRow(i);
}

void Nash_Dialog1::on_tableWidget_activated(const QModelIndex &index)
{
    QString val = ui->tableWidget->model()->data(index).toString();
    for(auto itr = btt.begin();itr != btt.end();itr++)
    {
        QString serial = QString::number(itr->getSerial());
        QString year = QString::number(itr->getYear());
        if(val == itr->getGenre() || val == itr->getPublisher() || val == itr->getWriter() || val == year)
        {
            int tmp = index.row();
            QModelIndex tmp1 = ui->tableWidget->model()->index(tmp,0);
            if(ui->tableWidget->model()->data(tmp1).toString() == itr->getName())
            {
                ui->lineEdit->setText(itr->getName());
                ui->lineEdit_2->setText(itr->getWriter());
                ui->lineEdit_3->setText(itr->getGenre());
                ui->lineEdit_4->setText(year);
                ui->lineEdit_5->setText(serial);
                ui->lineEdit_6->setText(itr->getPublisher());
                break;
            }
        }
        if(itr->getName() == val || serial == val)
        {
            ui->lineEdit->setText(itr->getName());
            ui->lineEdit_2->setText(itr->getWriter());
            ui->lineEdit_3->setText(itr->getGenre());
            ui->lineEdit_4->setText(year);
            ui->lineEdit_5->setText(serial);
            ui->lineEdit_6->setText(itr->getPublisher());
            break;
        }
    }
}


void Nash_Dialog1::on_pushButton_clicked()
{
    QString name = ui->lineEdit->text();
    QString writer = ui->lineEdit_2->text();
    QString Genre = ui->lineEdit_3->text();
    QString year = ui->lineEdit_4->text();
    QString serial = ui->lineEdit_5->text();
    QString publisher = ui->lineEdit_6->text();
    bool flag = true;
    bool validatioan = ui->tableWidget->currentIndex().isValid();
    if(validatioan == false)
        return;
    if(name == "" || writer == "" || Genre == "" || year == "" || serial == "" || publisher == "" )
    {
        QMessageBox msgBox;
        msgBox.setText("A line or lines are empty!");
        msgBox.setInformativeText("Do you want to continue?");
        msgBox.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
        msgBox.setDefaultButton(QMessageBox::No);
        int ret = msgBox.exec();
        switch (ret)
        {
        case QMessageBox::No:
            flag = false;break;
        case QMessageBox::Yes:
            break;
        default:
            break;
        }
    }

    if(flag == true)
    {
        nash_books tmp(name,writer,publisher,Genre,serial.toLongLong(),year.toInt());
        if(ui->tableWidget->rowCount() == btt.size())
        {
            int tmp7 = ui->tableWidget->currentIndex().row();
            QModelIndex tmp1 = ui->tableWidget->model()->index(tmp7,0);
            QModelIndex tmp2 = ui->tableWidget->model()->index(tmp7,1);
            QModelIndex tmp3 = ui->tableWidget->model()->index(tmp7,2);
            QModelIndex tmp4 = ui->tableWidget->model()->index(tmp7,3);
            QModelIndex tmp5 = ui->tableWidget->model()->index(tmp7,4);
            QModelIndex tmp6 = ui->tableWidget->model()->index(tmp7,5);
            QString BookName = ui->tableWidget->model()->data(tmp1).toString();
            QString Writer = ui->tableWidget->model()->data(tmp2).toString();
            QString genre = ui->tableWidget->model()->data(tmp3).toString();
            QString Year = ui->tableWidget->model()->data(tmp4).toString();
            QString Serial = ui->tableWidget->model()->data(tmp5).toString();
            QString Publisher = ui->tableWidget->model()->data(tmp6).toString();
            nash_books tmp8(BookName,Writer,Publisher,genre,Serial.toLongLong(),Year.toInt());
            btt.replace(tmp7,tmp);
            btt.UpdateGenre(genre,tmp8,Genre,tmp);
            btt.UpdatePublisher(Publisher,tmp8,publisher,tmp);
            btt.UpdateWriter(Writer,tmp8,writer,tmp);
            btt.UpdateYear(Year,tmp8,year,tmp);
            ui->tableWidget->currentIndex().~QModelIndex();
        }
        else
        {
            int i = 0;
            for(auto itr = btt.begin(); itr != btt.end() ;itr++)
            {
                if(itr->getName() == name && itr->getSerial() == serial.toLongLong())
                {
                    btt.replace(i,tmp);
                    btt.UpdateGenre(itr->getGenre(),itr.operator*(),Genre,tmp);
                    btt.UpdatePublisher(itr->getPublisher(),itr.operator*(),publisher,tmp);
                    btt.UpdateWriter(itr->getWriter(),itr.operator*(),writer,tmp);
                    btt.UpdateYear(QString::number(itr->getYear()),itr.operator*(),year,tmp);
                    break;
                }
                i++;
            }
        }
        RemoveAllRows();
        showTable();
    }
}

void Nash_Dialog1::on_pushButton_2_clicked()
{
    QString name = ui->lineEdit->text();
    QString writer = ui->lineEdit_2->text();
    QString Genre = ui->lineEdit_3->text();
    QString year = ui->lineEdit_4->text();
    QString serial = ui->lineEdit_5->text();
    QString publisher = ui->lineEdit_6->text();
    bool flag = true;
    if(name == "" || writer == "" || Genre == "" || year == "" || serial == "" || publisher == "")
    {
        QMessageBox msgBox;
        msgBox.setText("A line or lines are empty!");
        msgBox.setInformativeText("Do you want to continue?");
        msgBox.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
        msgBox.setDefaultButton(QMessageBox::No);
        int ret = msgBox.exec();
        switch (ret)
        {
        case QMessageBox::No:
            flag = false;break;
        case QMessageBox::Yes:
            break;
        default:
            break;
        }
    }
    for(auto itr = btt.begin();itr != btt.end() ;itr++)
    {
        if(itr->getName() == name || itr->getSerial() == serial.toInt())
        {
            QMessageBox::information(this,"Duplicate info","We have book with same info!");
            return;
        }
    }
    if(flag == true)
    {
        nash_books tmp(name,writer,publisher,Genre,serial.toLongLong(),year.toInt());
        btt.addBooks(tmp);
        btt.AddToClusterGenre(Genre,tmp);
        btt.AddToClusterPublisher(publisher,tmp);
        btt.AddToClusterWriter(writer,tmp);
        btt.AddToClusterYear(year,tmp);
        RemoveAllRows();
        showTable();
    }
}


void Nash_Dialog1::on_sort_book_clicked()
{
    btt.sortName();
    RemoveAllRows();
    showTable();
}

void Nash_Dialog1::on_sort_writer_clicked()
{
    btt.sortWriter();
    RemoveAllRows();
    showTable();
}

void Nash_Dialog1::on_sort_genre_clicked()
{
    btt.sortGenre();
    RemoveAllRows();
    showTable();
}

void Nash_Dialog1::on_sort_year_clicked()
{
    btt.sortYear();
    RemoveAllRows();
    showTable();
}

void Nash_Dialog1::on_sort_serial_clicked()
{
    btt.sortSerial();
    RemoveAllRows();
    showTable();
}

void Nash_Dialog1::on_sort_publisher_clicked()
{
    btt.sortPublisher();
    RemoveAllRows();
    showTable();
}

void Nash_Dialog1::on_pushButton_3_clicked()
{
    if(ui->tableWidget->currentIndex().isValid() == false)
        return;
    if(btt.size() == ui->tableWidget->rowCount())
    {
        int trow = ui->tableWidget->currentIndex().row();
        btt.removeAt(trow);
        QModelIndex tmp1 = ui->tableWidget->model()->index(trow,0);
        QModelIndex tmp2 = ui->tableWidget->model()->index(trow,1);
        QModelIndex tmp3 = ui->tableWidget->model()->index(trow,2);
        QModelIndex tmp4 = ui->tableWidget->model()->index(trow,3);
        QModelIndex tmp5 = ui->tableWidget->model()->index(trow,4);
        QModelIndex tmp6 = ui->tableWidget->model()->index(trow,5);
        QString name = ui->tableWidget->model()->data(tmp1).toString();
        QString writer = ui->tableWidget->model()->data(tmp2).toString();
        QString Genre = ui->tableWidget->model()->data(tmp3).toString();
        QString year = ui->tableWidget->model()->data(tmp4).toString();
        QString serial = ui->tableWidget->model()->data(tmp5).toString();
        QString publisher = ui->tableWidget->model()->data(tmp6).toString();
        for(int i = 0;i < btt.Genre[Genre].size() ;i++)
        {
            if(btt.Genre[Genre].value(i).getName() == name)
            {
                btt.Genre[Genre].removeAt(i);
                break;
            }
        }
        for(int i = 0;i < btt.Publisher[publisher].size() ;i++)
        {
            if(btt.Publisher[publisher].value(i).getName() == name)
            {
                btt.Genre[publisher].removeAt(i);
                break;
            }
        }
        for(int i = 0;i < btt.Year[year.toInt()].size() ;i++)
        {
            if(btt.Year[year.toInt()].value(i).getName() == name)
            {
                btt.Year[year.toInt()].removeAt(i);
                break;
            }
        }
        for(int i = 0;i < btt.Writer[writer].size() ;i++)
        {
            if(btt.Writer[writer].value(i).getName() == name)
            {
                btt.Writer[writer].removeAt(i);
                break;
            }
        }
    }
    else
    {
        QString name = ui->lineEdit->text();
        QString writer = ui->lineEdit_2->text();
        QString Genre = ui->lineEdit_3->text();
        QString year = ui->lineEdit_4->text();
        QString serial = ui->lineEdit_5->text();
        QString publisher = ui->lineEdit_6->text();
        int i=0;
        for(auto itr = btt.begin() ;itr != btt.end() ;itr++)
        {
            if(itr->getName() == name && itr->getWriter() == writer
                    && itr->getGenre() == Genre && itr->getPublisher() == publisher
                    && itr->getSerial() == serial.toLongLong() && itr->getYear() == year.toInt())
            {
                btt.removeAt(i);
                for(int i = 0;i < btt.Genre[Genre].size() ;i++)
                {
                    if(btt.Genre[Genre].value(i).getName() == name)
                    {
                        btt.Genre[Genre].removeAt(i);
                        break;
                    }
                }
                for(int i = 0;i < btt.Publisher[publisher].size() ;i++)
                {
                    if(btt.Publisher[publisher].value(i).getName() == name)
                    {
                        btt.Genre[publisher].removeAt(i);
                        break;
                    }
                }
                for(int i = 0;i < btt.Year[year.toInt()].size() ;i++)
                {
                    if(btt.Year[year.toInt()].value(i).getName() == name)
                    {
                        btt.Year[year.toInt()].removeAt(i);
                        break;
                    }
                }
                for(int i = 0;i < btt.Writer[writer].size() ;i++)
                {
                    if(btt.Writer[writer].value(i).getName() == name)
                    {
                        btt.Writer[writer].removeAt(i);
                        break;
                    }
                }
                break;
            }
            i++;
        }
    }
    RemoveAllRows();
    showTable();
}

void Nash_Dialog1::on_Genre_group_clicked()
{
    nexp2 = new nash_Dialog2(this);
    nexp2->show();
    nexp2->setTitle("Genres");
    nexp2->setQmapG(btt.getGenre());
    for(auto itr = btt.Genre.begin();itr != btt.Genre.end() ;itr++)
        nexp2->showList(itr.key());
    nexp2->exec();
}

void Nash_Dialog1::on_Writer_group_clicked()
{
    nexp2 = new nash_Dialog2(this);
    nexp2->show();
    nexp2->setTitle("Writers");
    nexp2->setQmapW(btt.Writer);
    for(auto itr = btt.Writer.begin();itr != btt.Writer.end() ;itr++)
        nexp2->showList(itr.key());
    nexp2->exec();
}

void Nash_Dialog1::on_Year_group_clicked()
{
    nexp2 = new nash_Dialog2(this);
    nexp2->show();
    nexp2->setTitle("Years");
    nexp2->setQmapY(btt.Year);
    for(auto itr = btt.Year.begin();itr != btt.Year.end() ;itr++)
    {
        QString year = QString::number((itr.key()));
        nexp2->showList(year);
    }
    nexp2->exec();
}

void Nash_Dialog1::on_Publisher_group_clicked()
{
    nexp2 = new nash_Dialog2(this);
    nexp2->show();
    nexp2->setTitle("Publishers");
    nexp2->setQmapP(btt.Publisher);
    for(auto itr = btt.Publisher.begin();itr != btt.Publisher.end() ;itr++)
        nexp2->showList(itr.key());
    nexp2->exec();
}

void Nash_Dialog1::on_Search_button_clicked()
{
    QString search = ui->lineEdit_7->text();
    if(search.isEmpty())
    {
        QMessageBox::information(this,"Empty Search Field","The search field is empty. "
                                                           "Please enter a word and click Find.");
    }
    else
    {
        int i = 0;
        bool flag = false;
        bool flag1 = false;
        for(auto itr = this->begin();itr != this->end() ;itr++)
        {
            if(QString(itr.key()).contains(search,Qt::CaseInsensitive))
            {
                for(auto itrs = btt.begin() ;itrs != btt.end() ;itrs++)
                {
                    if(itr->contains(itrs->getName()))
                    {
                        if(flag == false)
                        {
                            RemoveAllRows();
                            flag = true;
                        }
                        AddRows(i);
                        showD2(i,0,itrs->getName());
                        showD2(i,1,itrs->getWriter());
                        showD2(i,2,itrs->getGenre());
                        showD2(i,3,itrs->getYear());
                        showD2(i,4,itrs->getSerial());
                        showD2(i,5,itrs->getPublisher());
                        showD2(i,6,itr.key());
                        i++;
                    }
                }
                flag1 = true;
                break;
            }
            if(flag1)
                break;
        }
        for(auto itr = btt.begin(); itr != btt.end() ;itr++)
        {
            if(QString(itr->getName()).contains(search,Qt::CaseInsensitive) ||
                    QString(itr->getWriter()).contains(search,Qt::CaseInsensitive) ||
                    QString(itr->getGenre()).contains(search,Qt::CaseInsensitive) ||
                    QString(itr->getPublisher()).contains(search,Qt::CaseInsensitive) ||
                    QString(QString::number(itr->getYear())).contains(search,Qt::CaseInsensitive) ||
                    QString(QString::number(itr->getSerial())).contains(search,Qt::CaseInsensitive))
            {
                if(flag == false)
                {
                    RemoveAllRows();
                    flag = true;
                }
                AddRows(i);
                showD2(i,0,itr->getName());
                showD2(i,1,itr->getWriter());
                showD2(i,2,itr->getGenre());
                showD2(i,3,itr->getYear());
                showD2(i,4,itr->getSerial());
                showD2(i,5,itr->getPublisher());
                i++;
            }

        }
        if(!flag)
        {
            QMessageBox::information(this, tr("Word Not Found"),
                                     tr("Sorry, the word cannot be found."));
            showTable();
        }
    }

}

void Nash_Dialog1::on_lineEdit_7_returnPressed()
{
    on_Search_button_clicked();
}

void Nash_Dialog1::on_Lending_button_clicked()
{
    QString bookName = ui->lineEdit->text();
    QString Borrower = ui->lineEdit_8->text();
    if(bookName == "" || Borrower =="")
    {
        QMessageBox::information(this,"Empty line error","A line/lines are empty");
        return;
    }
    bool flag1 = false;
    bool flag2 = false;
    for(auto itr = btt.begin();itr != btt.end() ;itr++)
    {
        if(itr->getName() == bookName)
        {
            flag2 = true;
            for(auto itrs = this->begin();itrs != this->end();itrs++)
            {
                if(itrs->contains(bookName))
                {
                    QMessageBox::information(this,"Lending function","this book has borrowed by a person");
                    flag1 = true;
                    break;
                }
            }
        }
        if(flag1)
            break;
    }
    if(!flag1 && flag2)
    {
        this->Add_Borrow_Users(Borrower,bookName);
    }
    RemoveAllRows();
    showTable();
}

void Nash_Dialog1::on_tableWidget_cellActivated(int row, int column)
{
    if(column == 6)
    {
        if(ui->tableWidget->currentIndex().column() == column && ui->tableWidget->currentIndex().row() == row)
        {
            QString val = ui->tableWidget->model()->data(ui->tableWidget->currentIndex()).toString();
            QModelIndex tmp1 = ui->tableWidget->model()->index(ui->tableWidget->currentIndex().row(),0);
            ui->lineEdit_8->setText(val);
            ui->lineEdit->setText(ui->tableWidget->model()->data(tmp1).toString());
            ui->lineEdit_2->setText("");
            ui->lineEdit_3->setText("");
            ui->lineEdit_4->setText("");
            ui->lineEdit_5->setText("");
            ui->lineEdit_6->setText("");

        }
    }
}

void Nash_Dialog1::on_Del_lend_button_clicked()
{
    QString Borrower = ui->lineEdit_8->text();
    QString BookName = ui->lineEdit->text();
    if(Borrower == "" || BookName == "")
    {
        QMessageBox::information(this,"Empty line","A line or lines are empty.");
        return;
    }
    for(auto itr = btt.begin();itr != btt.end() ;itr++)
    {
        if(itr->getName() == BookName)
        {
            for(auto itrs = this->begin();itrs != this->end();itrs++)
            {
                if(itrs->contains(BookName))
                {
                    this->DellBorrowedUsers(Borrower,BookName);
                    RemoveAllRows();
                    showTable();
                    return;
                }
            }
        }
    }

}

void Nash_Dialog1::UpdateTime()
{
    ui->label_7->setText(QTime::currentTime().toString("hh:mm:ss"));

}
