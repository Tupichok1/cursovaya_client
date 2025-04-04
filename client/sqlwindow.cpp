#include "sqlwindow.h"
#include "ui_sqlwindow.h"
#include "adminswindow.h"
#include "authorization.h"
#include <QDebug>
#include <sstream>
#include <QMenu>
#include <QMenuBar>

sqlwindow::sqlwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::sqlwindow)
{
    ui->setupUi(this);
    ui -> resultOfSelect -> setVisible(false);

    this -> setWindowTitle("Написание SQL-запросов");

    ui -> sqlQuery -> setPlaceholderText(QString("Введите SQL-запрос"));

    QMenuBar *menubar = new QMenuBar(this);
    QMenu *menu1 = menubar -> addMenu("Settings");
    QAction* exitAccount = menu1->addAction("Выйти из аккаунта");
    QAction* exitMenu = menu1->addAction("Выйти в меню");

    connect(exitAccount, &QAction::triggered, this, &sqlwindow::exitAccount);
    connect(exitMenu, &QAction::triggered, this, &sqlwindow::exitMenu);

    CL = client::getInstance();
}

void sqlwindow::exitAccount() {

    close();
    authorization* window = new authorization();
    window -> show();
}

void sqlwindow::exitMenu() {

    close();
    adminsWindow* window = new adminsWindow();
    window -> show();
}

sqlwindow::~sqlwindow()
{
    delete ui;
}

void sqlwindow::on_sqlQuery_editingFinished()
{

    QString command = ui -> sqlQuery -> text();

    if ( command == "\\dt" ) {
        command = "SELECT tablename FROM pg_tables WHERE schemaname='public'";
    }

    CL -> sendCommand("sql_command " + command);
    QString response = CL -> takeResponse();

    qDebug() << response;

    std::stringstream ss(response.toStdString());
    std::string status, word;
    getline(ss, status, ' ');

    ui -> resultOfQuery -> setVisible(false);
    ui -> resultOfSelect -> setVisible(false);

    if ( status == "ERROR:" ) {
        ui -> resultOfQuery -> setVisible(true);
        ui -> resultOfQuery -> setText(response);
        return;
    }

    if ( command[0] == 's' or command[0] == 'S' ) {
        ui -> resultOfQuery -> setVisible(false);
        ui -> resultOfQuery -> setText("");
        fillTable(response.toStdString());
    }

    else {
        ui -> resultOfSelect -> setVisible(false);
        ui -> resultOfQuery -> setVisible(true);
        ui -> resultOfQuery -> setText(response);
    }
}

void sqlwindow::fillTable(std::string output) {

    std::replace(output.begin(), output.end(), '-', ' ');
    std::replace(output.begin(), output.end(), '+', ' ');
    std::stringstream sstream(output);

    std::string end;
    sstream >> end;

    QStringList namesOfColumn = {QString::fromStdString(end)};
    sstream >> end;

    while ( true ) {

        if ( end == "|" ) {

            sstream >> end;
            namesOfColumn.append(QString::fromStdString(end));
            sstream >> end;
            continue;
        }

        else {
            break;
        }
    }

    ui -> resultOfSelect -> setVisible(true);
    ui -> resultOfSelect -> horizontalHeader() -> setStyleSheet("color: black");
    ui -> resultOfSelect -> setRowCount(0);
    ui -> resultOfSelect -> setColumnCount(namesOfColumn.size());
    ui -> resultOfSelect -> horizontalHeader() -> setSectionResizeMode(QHeaderView::Stretch);
    ui -> resultOfSelect -> verticalHeader() -> setVisible(false);
    ui -> resultOfSelect -> setHorizontalHeaderLabels(namesOfColumn);

    int index = 0;
    while ( true ) {

        ui -> resultOfSelect -> insertRow(index);
        for ( int i = 0; i < namesOfColumn.size(); i ++ ) {

            ui -> resultOfSelect -> setItem(index, i, new QTableWidgetItem(QString::fromStdString(end)));
            sstream >> end;

            if ( end == "|" ) {
                sstream >> end;
                continue;
            }

            if ( end[0] == '(' ) {
                return;
            }
        }

        index += 1;
    }
}

