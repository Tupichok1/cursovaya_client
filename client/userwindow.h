#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <iostream>
#include <string>
#include <QStringList>
#include "client.h"


namespace Ui {
class userWindow;
}

class userWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit userWindow(QString userID, QWidget *parent = nullptr);
    ~userWindow();

private slots:
    void showTable();
    void exitAccount();

    void on_makeOrder_clicked();

    void on_makeSave_clicked();

    void on_closeDeposit_clicked();

private:
    client* CL;
    QSqlQuery* query;
    QString userID;
    std::vector<std::vector<QString>> valuesOfTable;
    Ui::userWindow *ui;
};

#endif // USERWINDOW_H
