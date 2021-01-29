#include "nash_books_table.h"
#include <algorithm>


nash_books_table::nash_books_table()
{
    load();
    clusterGenre();
    clusterPublisher();
    clusterWriter();
    clusterYear();
}

void nash_books_table::addBooks(nash_books tmp)
{
    this->append(tmp);
}

void nash_books_table::load()
{

    QFile file ("books.txt");
    file.open(QFile::Text|QFile::ReadWrite) ;
    if ( !file.isOpen() )
        return ;
    QTextStream fst (&file);

    while (!fst.atEnd())
    {
        QStringList sl = fst.readLine().split(',');
        if(sl.size()!=6)
            continue ;
        nash_books tmp(sl[0] ,sl[1] , sl[2],sl[3], sl[4].toLongLong(), sl[5].toInt());
        this->append(tmp);
    }


    file.close();

}

void nash_books_table::save()
{
    QFile file (boo) ;
    file.open(QFile::Text|QFile::WriteOnly) ;
    if ( !file.isOpen() )
    {
        throw "cant write into file " boo  ;
    }

    else
    {
        QTextStream fst (&file);

        for ( nash_books_table::iterator itr = begin() ; itr != end() ; ++ itr )
        {
            fst <<itr->getName()<<","
               << itr->getWriter() << ","
               << itr->getPublisher() << ","
               << itr->getGenre() << ","
               << itr->getSerial()  << ","
               << itr->getYear() << endl;
        }
    }


    file.close();

}

bool compratorG(nash_books f,nash_books s)
{
    if(f.getGenre() == s.getGenre())
        if(f.getSerial() <s.getSerial())
            return true;
    if(f.getGenre() < s.getGenre())
        return true;
    return false;
}

bool compratorW(nash_books f,nash_books s)
{
    if(f.getWriter() == s.getWriter())
        if(f.getSerial() <s.getSerial())
            return true;
    if(f.getWriter() < s.getWriter())
        return true;
    return false;
}

bool compratorN(nash_books f,nash_books s)
{
    if(f.getName()< s.getName())
        return true;
    return false;
}

bool comparatorP(nash_books f,nash_books s)
{
    if(f.getPublisher() == s.getPublisher())
        if(f.getSerial() <s.getSerial())
            return true;
    if(f.getPublisher() < s.getPublisher())
        return true;
    return false;
}

bool compratorY(nash_books f,nash_books s)
{
    if (f.getYear() == s.getYear())
        if(f.getSerial() <s.getSerial())
            return true;
    if(f.getYear() < s.getYear())
        return true;
    return false;
}

bool compratorS(nash_books f,nash_books s)
{
    if(f.getSerial() < s.getSerial())
        return true;
    return false;
}

void nash_books_table::sortGenre()
{
    std::sort(this->begin(),this->end(),compratorG);
}

void nash_books_table::sortWriter()
{
    std::sort(this->begin(),this->end(),compratorW);
}

void nash_books_table::sortName()
{
    std::sort(this->begin(),this->end(),compratorN);
}

void nash_books_table::sortPublisher()
{
    std::sort(this->begin(),this->end(),comparatorP);
}

void nash_books_table::sortYear()
{
    std::sort(this->begin(),this->end(),compratorY);
}

void nash_books_table::sortSerial()
{
    std::sort(this->begin(),this->end(),compratorS);
}

void nash_books_table::clusterGenre()
{
    for(auto itr = this->begin();itr != this->end();itr++)
    {
        if(Genre.count(itr->getGenre())>0)
        {
            Genre[itr->getGenre()].append(*itr);
        }
        else
        {
            nash_books s(itr->getName(),itr->getWriter(),itr->getPublisher(),itr->getGenre(),itr->getSerial(),itr->getYear());
            QList<nash_books> tmp;
            tmp.append(s);
            Genre.insert(itr->getGenre(),tmp);
        }
    }
}

void nash_books_table::clusterPublisher()
{
    for(auto itr = this->begin();itr != this->end();itr++)
    {
        if(Publisher.count(itr->getPublisher())>0)
        {
            Publisher[itr->getPublisher()].append(*itr);
        }
        else
        {
            nash_books s(itr->getName(),itr->getWriter(),itr->getPublisher(),itr->getGenre(),itr->getSerial(),itr->getYear());
            QList<nash_books> tmp;
            tmp.append(s);
            Publisher.insert(itr->getPublisher(),tmp);
        }
    }
}

void nash_books_table::clusterYear()
{
    for(auto itr = this->begin();itr != this->end();itr++)
    {
        if(Year.count(itr->getYear())>0)
        {
            Year[itr->getYear()].append(*itr);
        }
        else
        {
            nash_books s(itr->getName(),itr->getWriter(),itr->getPublisher(),itr->getGenre(),itr->getSerial(),itr->getYear());
            QList<nash_books> tmp;
            tmp.append(s);
            Year.insert(itr->getYear(),tmp);
        }
    }
}

void nash_books_table::clusterWriter()
{
    for(auto itr = this->begin();itr != this->end();itr++)
    {
        if(Writer.count(itr->getWriter())>0)
        {
            Writer[itr->getWriter()].append(*itr);
        }
        else
        {
            nash_books s(itr->getName(),itr->getWriter(),itr->getPublisher(),itr->getGenre(),itr->getSerial(),itr->getYear());
            QList<nash_books> tmp;
            tmp.append(s);
            Writer.insert(itr->getWriter(),tmp);
        }
    }
}

void nash_books_table::AddToClusterGenre(QString Genre,nash_books tmp)
{
    for(auto itr = this->Genre.begin(); itr != this->Genre.end() ; itr++)
        if(tmp.getGenre() == itr.key())
        {
            this->Genre[itr.key()].append(tmp);
            return;
        }
    QList<nash_books> fl;
    fl.append(tmp);
    this->Genre.insert(Genre,fl);
}

void nash_books_table::UpdateGenre(QString Genre1, nash_books tmp1, QString Genre2, nash_books tmp2)
{
    if(Genre.contains(Genre1))
    {
        for(auto itrs = Genre.begin(); itrs != Genre.end() ;itrs++)
        {
            bool flag = false;
            if(itrs.key() == Genre1)
            {
                int i = 0;
                for(auto itr = itrs->begin();itr != itrs->end() ;itr++)
                {
                    if(itr->getName() == tmp1.getName() && itr->getSerial() == tmp1.getSerial())
                    {
                        itrs->removeAt(i);
                        if(itrs->size() == 0)
                            Genre.remove(itrs.key());
                        if(Genre.contains(Genre2))
                            this->Genre[Genre2].append(tmp2);
                        else
                        {
                            QList <nash_books> tmp;
                            tmp.append(tmp2);
                            Genre.insert(Genre2,tmp);
                        }
                        flag = true;
                        break;
                    }
                    i++;
                }
                if(flag)
                    break;
            }
        }
    }
}

void nash_books_table::AddToClusterPublisher(QString Publisher,nash_books tmp)
{
    for(auto itr = this->Publisher.begin(); itr != this->Publisher.end() ; itr++)
        if(tmp.getGenre() == itr.key())
        {
            this->Publisher[itr.key()].append(tmp);
            return;
        }
    QList<nash_books> fl;
    fl.append(tmp);
    this->Publisher.insert(Publisher,fl);
}

void nash_books_table::UpdatePublisher(QString publisher1, nash_books tmp1, QString publisher2, nash_books tmp2)
{
    if(Publisher.contains(publisher1))
    {
        for(auto itrs = Publisher.begin(); itrs != Publisher.end() ;itrs++)
        {
            bool flag = false;
            if(itrs.key() == publisher1)
            {
                int i = 0;
                for(auto itr = itrs->begin();itr != itrs->end() ;itr++)
                {
                    if(itr->getName() == tmp1.getName() && itr->getSerial() == tmp1.getSerial())
                    {
                        itrs->removeAt(i);
                        if(itrs->size() == 0)
                            Publisher.remove(itrs.key());
                        if(Publisher.contains(publisher2))
                            this->Publisher[publisher2].append(tmp2);
                        else
                        {
                            QList <nash_books> tmp;
                            tmp.append(tmp2);
                            Publisher.insert(publisher2,tmp);
                        }
                        flag = true;
                        break;
                    }
                    i++;
                }
                if(flag)
                    break;
            }
        }
    }
}

void nash_books_table::AddToClusterYear(QString year,nash_books tmp)
{
    for(auto itr = this->Year.begin(); itr != this->Year.end() ; itr++)
        if(tmp.getGenre() == itr.key())
        {
            Year[itr.key()].append(tmp);
            return;
        }
    QList<nash_books> fl;
    fl.append(tmp);
    this->Year.insert(year.toInt(),fl);
}

void nash_books_table::UpdateYear(QString year1, nash_books tmp1, QString year2, nash_books tmp2)
{
    if(Year.contains(year1.toInt()))
    {
        for(auto itrs = Year.begin(); itrs != Year.end() ;itrs++)
        {
            bool flag = false;
            if(itrs.key() == year1.toInt())
            {
                int i = 0;
                for(auto itr = itrs->begin();itr != itrs->end() ;itr++)
                {
                    if(itr->getName() == tmp1.getName() && itr->getSerial() == tmp1.getSerial())
                    {
                        itrs->removeAt(i);
                        if(itrs->size() == 0)
                            Year.remove(itrs.key());
                        if(Year.contains(year2.toInt()))
                            this->Year[year2.toInt()].append(tmp2);
                        else
                        {
                            QList <nash_books> tmp;
                            tmp.append(tmp2);
                            Year.insert(year2.toInt(),tmp);
                        }
                        flag = true;
                        break;
                    }
                    i++;
                }
                if(flag)
                    break;
            }
        }
    }
}

void nash_books_table::AddToClusterWriter(QString writer,nash_books tmp)
{
    for(auto itr = this->Writer.begin(); itr != this->Writer.end() ; itr++)
        if(tmp.getGenre() == itr.key())
        {
            Writer[itr.key()].append(tmp);
            return;
        }
    QList<nash_books> fl;
    fl.append(tmp);
    this->Writer.insert(writer,fl);
}

void nash_books_table::UpdateWriter(QString writer1, nash_books tmp1, QString writer2, nash_books tmp2)
{
    if(Writer.contains(writer1))
    {
        for(auto itrs = Writer.begin(); itrs != Writer.end() ;itrs++)
        {
            bool flag = false;
            if(itrs.key() == writer1)
            {
                int i = 0;
                for(auto itr = itrs->begin();itr != itrs->end() ;itr++)
                {
                    if(itr->getName() == tmp1.getName() && itr->getSerial() == tmp1.getSerial())
                    {
                        itrs->removeAt(i);
                        if(itrs->size() == 0)
                            Writer.remove(itrs.key());
                        if(Writer.contains(writer2))
                            this->Writer[writer2].append(tmp2);
                        else
                        {
                            QList <nash_books> tmp;
                            tmp.append(tmp2);
                            Writer.insert(writer2,tmp);
                        }
                        flag = true;
                        break;
                    }
                    i++;
                }
                if(flag)
                    break;
            }
        }
    }
}

nash_books_table::~nash_books_table()
{
    save();
}

QMap<QString, QList<nash_books> > nash_books_table::getGenre()
{
    return Genre;
}

QMap<QString, QList<nash_books> > nash_books_table::getPublisher()
{
    return Publisher;
}

QMap<QString, QList<nash_books> > nash_books_table::getWriter()
{
    return Writer;
}

QMap<int, QList<nash_books> > nash_books_table::getYear()
{
    return Year;
}
