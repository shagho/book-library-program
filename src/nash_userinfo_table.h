#ifndef NASH_USERINFO_TABLE_H
#define NASH_USERINFO_TABLE_H

#include "nash_userinfo.h"
#include <QMap>

class nash_userInfo_table: public QMap<QString,nash_userInfo>
{
public:
    nash_userInfo_table();
    void save();
    void load();
    ~nash_userInfo_table();
};

#endif // NASH_USERINFO_TABLE_H
