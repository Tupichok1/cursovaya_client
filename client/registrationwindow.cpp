#include "registrationwindow.h"
#include "ui_registrationwindow.h"

registrationWindow::registrationWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registrationWindow)
{
    ui->setupUi(this);
}

registrationWindow::~registrationWindow()
{
    delete ui;
}
