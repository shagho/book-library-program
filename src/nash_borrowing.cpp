#include "nash_borrowing.h"
#include <QFile>
#include <QStringList>
#include <QTextStream>
#define bub "bub"

nash_Borrowing::nash_Borrowing()
{
    load();
}

void nash_Borrowing::Add_Borrow_Users(QString U, QString B)
{
    if(this->contains(U))
    {
        this->find(U)->push_back(B);
        BorrowedBooks++;
        return;
    }
    QList <QString> tmp;
    tmp.append(B);
    this->insert(U,tmp);
    BorrowedBooks++;
}

void nash_Borrowing::DellBorrowedUsers(QString U, QString B)
{
    if((*this)[U].size() == 1)
    {
        this->remove(U);
        BorrowedBooks--;
        return;
    }
    (*this)[U].removeOne(B);
    BorrowedBooks--;
}

long long nash_Borrowing::getBorrowedBooks()
{
    return BorrowedBooks;
}

void nash_Borrowing::load()
{
    QFile file (bub);
    file.open(QFile::Text|QFile::ReadOnly) ;
    if ( !file.isOpen() )
        return ;
    QTextStream fst (&file);

    while (!fst.atEnd())
    {
        QStringList sl = fst.readLine().split(',');
        QList<QString> tmp;
        for (int i=1;i<sl.size();i++)
        {
            tmp.append(sl[i]);
            BorrowedBooks++;
        }

        this->insert(sl[0],tmp);
    }
    file.close();
}

void nash_Borrowing::save()
{
    QFile file (bub) ;
    file.open(QFile::Text|QFile::WriteOnly) ;
    if ( !file.isOpen() )
    {

        throw "cant write into file " bub  ;
    }
    QTextStream fst (&file);

    for ( auto itr = this->begin();itr != this->end();itr++)
    {
        fst << itr.key();
        for(int i=0; i < itr.value().size();i++)
        {
              fst <<","<<itr.value().value(i);
        }
        fst<<endl;
    }

    file.close();
}

nash_Borrowing::~nash_Borrowing()
{
    save();
}
