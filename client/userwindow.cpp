#include "userwindow.h"
#include "ui_userwindow.h"
#include "depositwindow.h"
#include "authorization.h"
#include "database.h"
#include <QFileDialog>
#include <QFileInfo>
#include <QMenuBar>
#include <sstream>

userWindow::userWindow(QString userID, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::userWindow)
{
    ui->setupUi(this);

    this -> setWindowTitle("Личный кабинет");
    this -> userID = userID;
    ui -> depositForClose -> setPlaceholderText(QString("Номер депозита для закрытия"));

    QMenuBar *menubar = new QMenuBar(this);
    QMenu *menu1 = menubar -> addMenu("Settings");
    QAction* exitAccount = menu1->addAction("Выйти из аккаунта");

    connect(exitAccount, &QAction::triggered, this, &userWindow::exitAccount);

    CL = client::getInstance();

    showTable();
}


void userWindow::exitAccount() {

    close();
    authorization* window = new authorization();
    window -> show();
}

void userWindow::showTable()
{
    valuesOfTable = {};

    const QStringList name = {"Сумма вклада", "Процентная ставка", "Срок вклада", "Валюта", "Дата открытия"};

    ui -> tableWidget -> horizontalHeader() -> setStyleSheet("color: black");
    ui -> tableWidget -> setRowCount(0);
    ui -> tableWidget -> setColumnCount(5);
    ui -> tableWidget -> horizontalHeader() -> setSectionResizeMode(4, QHeaderView::Stretch);
    ui -> tableWidget -> horizontalHeader() -> setSectionResizeMode(1, QHeaderView::Stretch);
    ui -> tableWidget -> setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui -> tableWidget -> setHorizontalHeaderLabels(name);

    CL -> sendCommand("user_deposit " + userID);
    std::string response = CL -> takeResponse().toStdString();
    if ( response == "false" ) {
        return;
    }

    std::stringstream s(response);
    std::string row;

    int indexRow = 0;
    while( getline(s, row, '|') ) {

        std::stringstream ss(row);
        std::string item;

        ui->tableWidget->insertRow(indexRow);
        valuesOfTable.push_back(std::vector<QString>());
        for ( int i = 0; i < 5; i ++ ) {

            getline(ss, item, '_');
            QString value = QString::fromStdString(item);

            if ( i == 1 ) {
                value += "%";
            }

            if ( i == 2 ) {
                value += " мес.";
            }

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

userWindow::~userWindow()
{
    delete ui;
}

void userWindow::on_makeOrder_clicked()
{
    depositWindow* deposit = new depositWindow();
    deposit -> setUserID(userID);
    deposit -> show();
}

void userWindow::on_makeSave_clicked()
{

    QString dir_name = QFileDialog::getSaveFileName(this, tr("Choose File"), "/home", "CSV file (*.csv)");

    if ( dir_name == "" ) {
        return;
    }

    QString filePath = dir_name + ".csv";

    if ( QFileInfo::exists(filePath) ) {
        QFile::remove(filePath);
    }

    QFile dir(filePath);

    if ( !dir.open(QFile::WriteOnly | QIODevice::Append) ) {
        return;
    }

    QTextStream output(&dir);
    output << "Amount," << "Procent," << "Duration," << "Exchange," << "Date" << '\n';

    for ( size_t i = 0; i < valuesOfTable.size(); i ++ ) {

        for ( size_t j = 0; j < valuesOfTable[i].size() - 1; j ++ ) {

            if ( j != valuesOfTable[i].size() - 2 ) {
                output << valuesOfTable[i][j] << ",";
            }

            else {
                output << valuesOfTable[i][j] << '\n';
            }
        }
    }

    ui -> status -> setText("Экспорт выполнен");
}


void userWindow::on_closeDeposit_clicked()
{
    if ( ui -> depositForClose -> text().toInt() - 1 >= valuesOfTable.size() or ui -> depositForClose -> text().toInt() - 1 < 0 ) {
        ui -> status -> setText("Некорректный индекс!");
        ui -> depositForClose -> setText("");
        return;
    }

    QString closeOrder = valuesOfTable[ui -> depositForClose -> text().toInt() - 1][5];

    ui -> depositForClose -> setText("");

    CL -> sendCommand("change_deposit closed " + closeOrder);
    CL -> takeResponse();
    CL -> sendCommand("make_dump");
    CL -> takeResponse();

    ui -> status -> setText("Вклад успешно закрыт.");
    showTable();
}

