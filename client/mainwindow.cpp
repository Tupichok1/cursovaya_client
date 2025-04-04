#include "mainwindow.h"
#include "./ui_mainwindow.h"

authorization::authorization(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::)
{
    ui->setupUi(this);
}

authorization::~authorization()
{
    delete ui;
}

bool authorization::connected() {
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("localhost");
    db.setDatabaseName("pyramid");
    db.setUserName("postgres");
    db.setPassword("root");
    if ( !db.open() ) {
        return false;
    } else {
        return true;
    }
}

