#include "depositwindow.h"
#include "ui_depositwindow.h"
#include <QListView>
#include <string>
#include <QDateTime>
#include <sstream>

using namespace std;

depositWindow::depositWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::depositWindow)
{
    ui->setupUi(this);
    ui -> enterAmount -> setPlaceholderText(QString("Сумма вклада. Минимум - 10.000, максимум - 9.999.999"));
    this -> setWindowTitle("Заявка на открытие вклада");

    ui -> enterAmount -> setValidator(new QIntValidator(0, 1000000, this));

    exchange_ = "1";

    CL = client::getInstance();
}

depositWindow::~depositWindow()
{
    delete ui;
}

void depositWindow::setUserID(QString userID) {
    this -> userID = userID;
}

void depositWindow::on_makeOrder_clicked()
{

    if ( ui -> duration -> text() == "" or ui -> finalAmount -> text() == "" or ui -> enterAmount -> text() == "" ) {
        ui -> resultOfOrder -> setText("Не все поля заполнены!");
        return;
    }

    date_ = QDateTime::currentDateTime().toString("dd.MM.yyyy");

    CL -> sendCommand("insert_orders " + deposit_type_ + " " + exchange_);
    QString order_id = CL -> takeResponse();
    CL -> sendCommand("insert_bank " + userID + " " + order_id + " " + amount_ + " " + date_);
    CL -> takeResponse();
    ui -> resultOfOrder -> setText("Заявка на открытие вклада оставлена!");
    CL -> sendCommand("make_dump");
    CL -> takeResponse();
}

void depositWindow::on_chooseRubles_clicked()
{
    ui -> exchange -> setText("Рубли");
    exchange_ = "1";
}


void depositWindow::on_chooseYuan_clicked()
{
    ui -> exchange -> setText("Юани");
    exchange_ = "2";
}

void depositWindow::on_chooseThreeMonth_clicked()
{
    ui -> duration -> setText("3 месяца");
    ui -> percent -> setText("17%");
    deposit_type_ = "2";
    calculateFinalAmount();
}


void depositWindow::on_chooseSixMonth_clicked()
{
    ui -> duration -> setText("6 месяцев");
    ui -> percent -> setText("16%");
    deposit_type_ = "5";
    calculateFinalAmount();
}


void depositWindow::on_chooseTwelveMonth_clicked()
{
    ui -> duration -> setText("12 месяцев");
    ui -> percent -> setText("14%");
    deposit_type_ = "6";
    calculateFinalAmount();
}

void depositWindow::on_chooseOtherMonth_currentIndexChanged(const QString &arg1)
{

    if ( ui -> chooseOtherMonth -> currentText() == QString("2 месяца") ) {
        ui -> duration -> setText("2 месяца");
        ui -> percent -> setText("18%");
        deposit_type_ = "1";
    }

    if ( ui -> chooseOtherMonth -> currentText() == "4 месяца" ) {
        ui -> duration -> setText("4 месяца");
        ui -> percent -> setText("17%");
        deposit_type_ = "3";
    }

    if ( ui -> chooseOtherMonth -> currentText() == "5 месяцев" ) {
        ui -> duration -> setText("5 месяцев");
        ui -> percent -> setText("16%");
        deposit_type_ = "4";
    }

    if ( ui -> chooseOtherMonth -> currentText() == "Другой срок" ) {
        ui -> duration -> setText("");
        ui -> percent -> setText("");
        ui -> finalAmount -> setText(ui -> enterAmount -> text());
        return;
    }

    calculateFinalAmount();
}

void depositWindow::on_enterAmount_editingFinished()
{

    if ( ui -> enterAmount -> text().toInt() < 10000 ) {
        ui -> enterAmount -> setText("");
        ui -> finalAmount -> setText("");
        return;
    }

    amount_ = ui -> enterAmount -> text();
    calculateFinalAmount();
}

void depositWindow::calculateFinalAmount() {

    if ( ui -> enterAmount -> text().toInt() < 10000 ) {
        return;
    }

    if ( ui -> percent -> text() == QString("") ) {
        ui -> finalAmount -> setText(ui -> enterAmount -> text());
        return;
    }

    amount_ = ui -> enterAmount -> text();

    string finalDuration, finalPercent;
    stringstream takeDuration((ui -> duration -> text()).toStdString());
    takeDuration >> finalDuration;

    finalPercent = (ui -> percent -> text()).toStdString();
    replace(finalPercent.begin(), finalPercent.end(), '%', ' ');
    stringstream takePercent(finalPercent);
    takePercent >> finalPercent;

    float amount = (ui -> enterAmount -> text()).toInt();
    float finalSumm = amount + amount * stoi(finalPercent) * 31 * stoi(finalDuration) / 365 / 100;
    ui -> finalAmount -> setText(QString::number(int(finalSumm)));
}


void depositWindow::on_goBack_clicked()
{
    close();
}


void depositWindow::on_enterAmount_textChanged(const QString &arg1)
{
    calculateFinalAmount();
}

