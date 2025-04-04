#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QDialog>
#include <QScreen>
#include <QDebug>
#include "userwindow.h"
#include "ordersWindow.h"
#include "registr.h"

void cleanPassLog();

namespace Ui {
class authorization;
}

class authorization : public QDialog
{
    Q_OBJECT

public:
    explicit authorization(QWidget *parent = nullptr);
    void successfullyRegistered();
    ~authorization();

private slots:
    bool isExist();
    void on_registrButton_clicked();
    void cleanPassLog();
    bool takeLoginAndPass();
    void on_authorizationButton_clicked();

private:
    client* CL;
    Ui::authorization *ui;
    QSqlQuery* query;
    QString password;
    QString login;
    QString root;
    QString userID;
};

#endif // AUTHORIZATION_H
