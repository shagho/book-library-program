#include "nash_userinfo_table.h"
#include <QFile>
#include <QTextStream>
#include <QStringList>
#define usi "userInfo.txt"

nash_userInfo_table::nash_userInfo_table()
{
    load();
}

void nash_userInfo_table::save()
{
    QFile file (usi) ;
    file.open(QFile::Text|QFile::WriteOnly) ;
    if ( !file.isOpen() )
    {

        throw "cant write into file " usi  ;
    }
    QTextStream fst (&file);

    for ( nash_userInfo_table::iterator itr = begin() ; itr != end() ; ++ itr )
    {
        fst << itr.key() << ","
            << itr->getUserName()  << ","
            << itr->getPassWord()  << endl;
    }


    file.close();
}

void nash_userInfo_table::load()
{
    QFile file(usi);
    file.open(QFile::Text|QFile::ReadOnly);
    if(!file.isOpen()) return;
    QTextStream fst(&file);

    while(!fst.atEnd())
    {
        QStringList sp = fst.readLine().split(",");
        if(sp.size() != 3) continue;
        (*this)[sp[0]] = nash_userInfo{sp[1],sp[2]};
    }
}
nash_userInfo_table::~nash_userInfo_table()
{
    save();
}
