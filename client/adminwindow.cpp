#include "adminwindow.h"
#include "ui_adminwindow.h"

adminWindow::adminWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminWindow)
{
    ui->setupUi(this);
}

adminWindow::~adminWindow()
{
    delete ui;
}
