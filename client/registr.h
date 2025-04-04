#ifndef REGISTR_H
#define REGISTR_H

#include <QWidget>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <iostream>
#include <string>
#include "authorization.h"
#include "ui_registr.h"
#include "client.h"

namespace Ui {
class registr;
}

class registr : public QWidget
{
    Q_OBJECT

public:
    explicit registr(QWidget *parent = nullptr);
    ~registr();

private slots:
    void exitMenu();
    void clean();
    bool findErrors();

    bool isEmpty();

    void on_registration_clicked();

private:
    client* CL;
    Ui::registr *ui;
};

#endif // REGISTR_H
