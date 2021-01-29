#include "nash_userinfo.h"

nash_userInfo::nash_userInfo()
{

}

nash_userInfo::nash_userInfo(QString u, QString p)
{
    userName = u;
    password = p;
}

QString nash_userInfo::getUserName()
{
    return userName;
}

QString nash_userInfo::getPassWord()
{
    return password;
}
