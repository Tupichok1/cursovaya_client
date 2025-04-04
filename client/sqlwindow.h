#ifndef SQLWINDOW_H
#define SQLWINDOW_H

#include <QDialog>
#include <QProcess>
#include "client.h"

namespace Ui {
class sqlwindow;
}

class sqlwindow : public QDialog
{
    Q_OBJECT

public:
    explicit sqlwindow(QWidget *parent = nullptr);
    ~sqlwindow();

private slots:
    void exitMenu();
    void exitAccount();
    void fillTable(std::string output);

    void on_sqlQuery_editingFinished();

private:
    client* CL;
    Ui::sqlwindow *ui;
};

#endif // SQLWINDOW_H
