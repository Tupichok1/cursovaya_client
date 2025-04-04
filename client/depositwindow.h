#ifndef DEPOSITWINDOW_H
#define DEPOSITWINDOW_H

#include <QDialog>
#include <string>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <iostream>
#include <string>
#include "client.h"


namespace Ui {
class depositWindow;
}

class depositWindow : public QDialog
{
    Q_OBJECT

public:
    void setUserID(QString userID);
    explicit depositWindow(QWidget *parent = nullptr);
    ~depositWindow();

private slots:

    void on_makeOrder_clicked();

    void on_chooseRubles_clicked();

    void on_chooseYuan_clicked();

    void calculateFinalAmount();

    void on_chooseThreeMonth_clicked();

    void on_chooseSixMonth_clicked();

    void on_chooseTwelveMonth_clicked();

    void on_enterAmount_editingFinished();

    void on_chooseOtherMonth_currentIndexChanged(const QString &arg1);

    void on_goBack_clicked();

    void on_enterAmount_textChanged(const QString &arg1);

private:
    client* CL;
    QString userID;
    Ui::depositWindow *ui;
    QString amount_;
    QString deposit_type_;
    QString exchange_;
    QString date_;
};

#endif // DEPOSITWINDOW_H
