#include "user.h"

using namespace std;

authorize::authorize(QString asd, QString password) {
    userPassword = password;
    userName = asd;
    select_ = new Select(new without_where());
}

qint32 authorize::authorizeUser() {
    if ( isExist() ) {
        if ( userPassword != requiredPassword ) return 0;
        else return user_id;
    } else return 0;
}

bool authorize::isExist() {

    query = select_ -> function({"users"}, {"user_id", "login", "password", "root"});
    while ( query -> next() ) {
        user_id = (query -> value(0)).toInt();
        QString nameOfUser = query -> value(1).toString();
        requiredPassword = query -> value(2).toString();
        userRoot = query -> value(3).toString();
        if ( userName == nameOfUser ) {
            return true;
        }
    }
    return false;
}

QString authorize::takeRoot() {
    return userRoot;
}

