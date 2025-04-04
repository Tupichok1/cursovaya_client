#include "ordersWindow.h"
#include "ui_ordersWindow.h"
#include "userwindow.h"
#include "depositwindow.h"
#include "authorization.h"
#include "database.h"
#include "adminswindow.h"
#include <QMenuBar>
#include <QFile>
#include <QFileDialog>
#include <QFileInfo>
#include <sstream>

ordersWindow::ordersWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ordersWindow)
{
    ui->setupUi(this);
    setWindowTitle("Работа с заявками");

    ui -> enterID -> setPlaceholderText(QString("Введите ID заявки"));

    QMenuBar *menubar = new QMenuBar(this);
    QMenu *menu1 = menubar -> addMenu("Settings");
    QAction* exitAccount = menu1->addAction("Выйти из аккаунта");
    QAction* exitMenu = menu1->addAction("Выйти в меню");

    connect(exitAccount, &QAction::triggered, this, &ordersWindow::exitAccount);
    connect(exitMenu, &QAction::triggered, this, &ordersWindow::exitMenu);

    CL = client::getInstance();

    showTable();
}

void ordersWindow::exitAccount() {

    close();
    authorization* window = new authorization();
    window -> show();
}

void ordersWindow::exitMenu() {

    close();
    adminsWindow* window = new adminsWindow();
    window -> show();
}

ordersWindow::~ordersWindow()
{
    delete ui;
}

void ordersWindow::showTable()
{
    ui -> tableWidget -> setRowCount(0);
    ui -> tableWidget -> setColumnCount(6);
    ui -> tableWidget -> setShowGrid(true);
    ui -> tableWidget -> horizontalHeader() -> setStyleSheet("color: black");
    ui -> tableWidget -> horizontalHeader() -> setStretchLastSection(true);
    ui -> tableWidget -> verticalHeader() -> setVisible(false);
    ui -> tableWidget -> horizontalHeader() -> setSectionResizeMode(2, QHeaderView::Stretch);
    ui -> tableWidget -> setEditTriggers(QAbstractItemView::NoEditTriggers);

    const QStringList name = {"ID заявки", "Сумма вклада", "Процентная ставка", "Срок вклада", "Валюта", "Дата открытия"};
    ui->tableWidget->setHorizontalHeaderLabels(name);

    CL -> sendCommand("check_orders");
    std::string response = CL -> takeResponse().toStdString();
    std::stringstream s(response);
    std::string row;

    int indexRow = 0;
    while( getline(s, row, '|') ) {

        std::stringstream ss(row);
        std::string item;

        ui -> tableWidget -> insertRow(indexRow);
        valuesOfTable.push_back(std::vector<QString>());
        for ( int i = 0; i < 6; i ++ ) {

            getline(ss, item, '_');
            QString value = QString::fromStdString(item);

            QTableWidgetItem* item_ = new QTableWidgetItem(value);
            item_ -> setTextAlignment( Qt::AlignCenter );
            ui -> tableWidget -> setItem(indexRow,i, item_);

            valuesOfTable[indexRow].push_back(value);
        }

        getline(ss, item, '_');
        valuesOfTable[indexRow].push_back(QString::fromStdString(item));

        indexRow += 1;
    }
}

void ordersWindow::on_approveOrder_clicked()
{
    QString approvedOrder = ui -> enterID -> text();
    ui -> enterID -> setText("");

    CL -> sendCommand("change_deposit approved " + approvedOrder);
    CL -> takeResponse();
    CL -> sendCommand("make_dump");
    CL -> takeResponse();

    showTable();
}


void ordersWindow::on_rejectOrder_clicked()
{
    QString rejectOrder = ui -> enterID -> text();
    ui -> enterID -> setText("");

    CL -> sendCommand("change_deposit rejected " + rejectOrder);
    CL -> takeResponse();
    CL -> sendCommand("make_dump");
    CL -> takeResponse();

    showTable();
}


void ordersWindow::on_saveTable_clicked()
{
    QString dir_name = QFileDialog::getSaveFileName(this, tr("Choose File"), "/home", "CSV file (*.csv)");
    QString filePath = dir_name + ".csv";

    if ( QFileInfo::exists(dir_name) ) {
        QFile::remove(dir_name);
        filePath = dir_name;
    }

    if ( QFileInfo::exists(filePath) ) {
        QFile::remove(filePath);
    }

    QFile dir(filePath);

    if ( !dir.open(QFile::WriteOnly | QIODevice::Append) ) {
        return;
    }

    QTextStream output(&dir);
    output << "OrdersID," << "Amount," << "Procent," << "Duration," << "Exchange," << "Date" << '\n';

    for ( size_t i = 0; i < valuesOfTable.size(); i ++ ) {

        for ( size_t j = 0; j < valuesOfTable[i].size(); j ++ ) {

            if ( j != valuesOfTable[i].size() - 1 ) {
                output << valuesOfTable[i][j] << ",";
            }

            else {
                output << valuesOfTable[i][j] << '\n';
            }
        }
    }

    ui -> status -> setText("Экспорт выполнен");
}
