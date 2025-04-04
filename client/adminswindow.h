#ifndef ADMINSWINDOW_H
#define ADMINSWINDOW_H

#include <QDialog>

namespace Ui {
class adminsWindow;
}

class adminsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit adminsWindow(QWidget *parent = nullptr);
    ~adminsWindow();

private slots:
    void exitAccount();
    void on_ordersButton_clicked();

    void on_dumpButton_clicked();

    void on_SQLButton_clicked();

private:
    Ui::adminsWindow *ui;
};

#endif // ADMINSWINDOW_H
