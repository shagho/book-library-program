#ifndef NASH_BOOKS_H
#define NASH_BOOKS_H


#include <QString>
#include <QStringList>
#include <QMap>
#include <QFile>
#include <QTextStream>
class nash_books
{
protected:
    QString name;
    QString writer;
    QString publisher;
    QString genre;
    long long int serial;
    int year;

public:
    nash_books();
    nash_books(QString n,QString w,QString p,QString g,long long s,int y)
    {
        this->name = n;
        this->writer = w;
        this->publisher = p;
        this->genre = g;
        this->serial = s;
        this->year = y;
    }
    QString getName();
    QString getWriter();
    QString getPublisher();
    QString getGenre();
    long long int getSerial();
    int getYear();
    void AddBook();
    void editBook();

};

#endif
