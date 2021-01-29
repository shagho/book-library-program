#ifndef NASH_USERINFO_H
#define NASH_USERINFO_H

#include <QString>

class nash_userInfo
{
private:
    QString userName;
    QString password;
public:
    nash_userInfo();
    nash_userInfo(QString u,QString p);
    QString getUserName();
    QString getPassWord();
};

#endif // NASH_USERINFO_H
