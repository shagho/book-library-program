#ifndef NASH_BOOKS_TABLE_H
#define NASH_BOOKS_TABLE_H

#include "nash_books.h"
#include <QList>
#define boo "books.txt"

class nash_books_table : public QList<nash_books>
{

public:
    QMap <QString,QList<nash_books>> Genre;
    QMap <QString,QList<nash_books>> Publisher;
    QMap <int,QList<nash_books>> Year;
    QMap <QString,QList<nash_books>> Writer;
    nash_books_table();
    void addBooks(nash_books tmp);
    void load ();
    void save ();
    void sortGenre();
    void sortWriter();
    void sortName();
    void sortPublisher();
    void sortYear();
    void sortSerial();
    void clusterGenre();
    void AddToClusterGenre(QString Genre, nash_books tmp);
    void UpdateGenre(QString Genre1,nash_books tmp1,QString Genre2,nash_books tmp2);
    void clusterPublisher();
    void AddToClusterPublisher(QString Publisher,nash_books tmp);
    void UpdatePublisher(QString publisher1,nash_books tmp1,QString publisher2,nash_books tmp2);
    void clusterYear();
    void AddToClusterYear(QString year, nash_books tmp);
    void UpdateYear(QString year1,nash_books tmp1,QString year2,nash_books tmp2);
    void clusterWriter();
    void AddToClusterWriter(QString writer, nash_books tmp);
    void UpdateWriter(QString writer1,nash_books tmp1,QString writer2,nash_books tmp2);
    ~nash_books_table();
    QMap<QString,QList<nash_books>> getGenre();
    QMap<QString,QList<nash_books>> getPublisher();
    QMap<QString,QList<nash_books>> getWriter();
    QMap<int,QList<nash_books>> getYear();
};

#endif // NASH_BOOKS_TABLE_H
