#ifndef NASH_BORROWING_H
#define NASH_BORROWING_H

#include <QString>
#include <QMap>
#include <QList>
class nash_Borrowing:public QMap<QString,QList<QString>>
{
private:
    long long int BorrowedBooks = 0;
public:
    nash_Borrowing();
    void Add_Borrow_Users(QString U,QString B);
    void DellBorrowedUsers(QString U,QString B);
    long long int getBorrowedBooks();
    void load();
    void save();
    ~nash_Borrowing();

};

#endif // NASH_BORROWING_H
