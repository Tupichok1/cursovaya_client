#ifndef USER_H
#define USER_H

#include <QDebug>
#include "database.h"
#include <iostream>
#include <string>
#include "sql.h"

class authorize
{
private:
    int user_id;
    QString requiredPassword;
    QString userPassword;
    QString userName;
    QString userRoot;
    QSqlQuery* query;
    Select* select_;

public:
    bool isExist();
    authorize(QString username, QString password);
    QString takeRoot();
    qint32 authorizeUser();
};

#endif // USER_H
