#ifndef ORDERSWINDOW_H
#define ORDERSWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <iostream>
#include <string>
#include "client.h"

namespace Ui {
class ordersWindow;
}

class ordersWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ordersWindow(QWidget *parent = nullptr);
    ~ordersWindow();

private slots:
    void exitMenu();
    void exitAccount();

    void showTable();

    void on_approveOrder_clicked();

    void on_rejectOrder_clicked();

    void on_saveTable_clicked();

private:
    client* CL;
    std::vector<std::vector<QString>> valuesOfTable;
    Ui::ordersWindow *ui;
};

#endif // ORDERSWINDOW_H
