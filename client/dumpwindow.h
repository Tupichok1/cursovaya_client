#ifndef DUMPWINDOW_H
#define DUMPWINDOW_H

#include <QDialog>
#include "client.h"

namespace Ui {
class dumpWindow;
}

class dumpWindow : public QDialog
{
    Q_OBJECT

public:
    explicit dumpWindow(QWidget *parent = nullptr);
    ~dumpWindow();

private slots:
    void exitMenu();
    void exitAccount();
    void on_dumpButton_clicked();
    void showTable();
    void on_recoverButton_clicked();

private:
    QString message;
    client* CL;
    Ui::dumpWindow *ui;
};

#endif // DUMPWINDOW_H
