#include "adminswindow.h"
#include "ui_adminswindow.h"
#include "ordersWindow.h"
#include "dumpwindow.h"
#include "sqlwindow.h"
#include <QMenu>
#include <QMenuBar>
#include "authorization.h"
#include <QTcpSocket>

adminsWindow::adminsWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminsWindow)
{
    ui->setupUi(this);

    this -> setWindowTitle("Кабинет администратора");

    QMenuBar *menubar = new QMenuBar(this);
    QMenu *menu1 = menubar -> addMenu("Settings");
    QAction *exitAccount = menu1->addAction("Выйти из акканута");

    connect(exitAccount, &QAction::triggered, this, &adminsWindow::exitAccount);
}

void adminsWindow::exitAccount() {

    close();
    authorization* window = new authorization();
    window -> show();
}

adminsWindow::~adminsWindow()
{
    delete ui;
}

void adminsWindow::on_ordersButton_clicked()
{
    ordersWindow* window = new ordersWindow();
    window -> show();
    close();
}

void adminsWindow::on_dumpButton_clicked()
{
    dumpWindow* window = new dumpWindow();
    window -> show();
    close();
}


void adminsWindow::on_SQLButton_clicked()
{
    sqlwindow* window = new sqlwindow();
    window -> show();
    close();
}

