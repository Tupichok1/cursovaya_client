#include "dumpwindow.h"
#include "ui_dumpwindow.h"
#include "adminswindow.h"
#include "authorization.h"
#include <QDirIterator>
#include <QDebug>
#include <QDir>
#include <QMenu>
#include <QMenuBar>
#include <sstream>

dumpWindow::dumpWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dumpWindow)
{
    ui->setupUi(this);

    this -> setWindowTitle("Работа с дампами");

    ui -> numberOfDump -> setPlaceholderText("Введите номер файла");
    ui -> numberOfDump -> setValidator(new QIntValidator(0, 1000000, this));

    QMenuBar *menubar = new QMenuBar(this);
    QMenu *menu1 = menubar -> addMenu("Settings");
    QAction* exitAccount = menu1->addAction("Выйти из аккаунта");
    QAction* exitMenu = menu1->addAction("Выйти в меню");

    connect(exitAccount, &QAction::triggered, this, &dumpWindow::exitAccount);
    connect(exitMenu, &QAction::triggered, this, &dumpWindow::exitMenu);

    CL = client::getInstance();

    showTable();
}

void dumpWindow::exitAccount() {

    close();
    authorization* window = new authorization();
    window -> show();
}

void dumpWindow::exitMenu() {

    close();
    adminsWindow* window = new adminsWindow();
    window -> show();
}

dumpWindow::~dumpWindow()
{
    delete ui;
}

void dumpWindow::on_dumpButton_clicked()
{

    CL -> sendCommand("make_dump");
    CL -> takeResponse();
    showTable();
}


void dumpWindow::showTable() {

    CL -> sendCommand("take_dumpes");
    message = CL -> takeResponse();

    ui -> dumpTable -> setRowCount(0);
    ui -> dumpTable -> setColumnCount(1);
    ui -> dumpTable -> horizontalHeader() -> setStyleSheet("color: black");
    ui -> dumpTable -> setHorizontalHeaderLabels(QStringList{"Дата сохранения/Название файла"});
    ui -> dumpTable -> horizontalHeader() -> setSectionResizeMode(QHeaderView::Stretch);

    std::stringstream sstream(message.toStdString());
    std::string value;

    int index = 0;
    while( getline(sstream, value, ' ') ) {

        ui -> dumpTable -> insertRow(index);
        ui -> dumpTable -> setItem(index,0, new QTableWidgetItem(QString::fromStdString(value)));
        index += 1;
    }
}

void dumpWindow::on_recoverButton_clicked()
{
    if ( ui -> numberOfDump -> text() == "" or ui -> numberOfDump -> text().toInt() > ui -> dumpTable -> rowCount() ) {
        ui -> numberOfDump -> setText("");
        ui -> recoverStatus -> setText("Введите корректное значение!");
        return;
    }

    QString recoverFile = ui -> dumpTable -> item(ui -> numberOfDump -> text().toInt() - 1, 0) -> text();
    ui -> numberOfDump -> setText("");

    CL -> sendCommand("make_recover " + recoverFile);
}

