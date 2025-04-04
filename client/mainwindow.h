#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
QT_BEGIN_NAMESPACE
namespace Ui {
class authorization;
}
QT_END_NAMESPACE

class authorization : public QMainWindow
{
    Q_OBJECT

public:
    authorization(QWidget *parent = nullptr);
    ~authorization();
    bool connected();

private:
    Ui::authorization *ui;
    QSqlDatabase db;

};
#endif // MAINWINDOW_H
