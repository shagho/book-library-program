#include "nash_books.h"

nash_books::nash_books()
{

}

QString nash_books::getName()
{
    return name;
}

QString nash_books::getWriter()
{
    return writer;
}

QString nash_books::getGenre()
{
    return genre;
}

QString nash_books::getPublisher()
{
    return publisher;
}

int nash_books::getYear()
{
    return year;
}

long long int nash_books::getSerial()
{
    return serial;
}
