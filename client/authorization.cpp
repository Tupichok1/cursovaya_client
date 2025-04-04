#include "authorization.h"
#include "ui_authorization.h"
#include "adminswindow.h"
#include "client.h"
#include <QCryptographicHash>
#include <QResizeEvent>
#include <QRegExpValidator>
#include <unistd.h>
#include <sstream>

authorization::authorization(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::authorization)
{
    ui->setupUi(this);
    ui -> password -> setEchoMode(QLineEdit::Password);
    this -> setWindowTitle("Авторизация");

    ui -> login -> setValidator(new QRegExpValidator(QRegExp("[A-Za-z\\d]+"), this));
    ui -> password -> setValidator(new QRegExpValidator(QRegExp("[A-Za-z\\d]+"), this));

    CL = client::getInstance();
}

authorization::~authorization()
{
    delete ui;
}

void authorization::on_authorizationButton_clicked()
{
    if ( takeLoginAndPass() ){

        if ( isExist() == false ) {
            ui -> statusAuthorization -> setText("Неверный логин или пароль!");
            cleanPassLog();
            return;
        }

        close();
        if ( root == "user" ) {
            userWindow* window = new userWindow(userID);
            window -> show();
        }

        if ( root == "admin" ) {
            adminsWindow* window = new adminsWindow();
            window -> show();
        }
    }
}

bool authorization::takeLoginAndPass() {

    if ( ui -> password -> text() == "" or ui -> login -> text() == "" ) {
        ui -> statusAuthorization -> setText("Не все поля заполнены!");
        cleanPassLog();
        return false;
    }

    password = QCryptographicHash::hash(ui -> password -> text().toUtf8(), QCryptographicHash::Sha256).toHex();
    login = ui -> login -> text();

    return true;
}

bool authorization::isExist() {

    CL = client::getInstance();
    CL -> sendCommand("check_user " + login);
    std::string response = CL -> takeResponse().toStdString();

    if ( response == "false" ) {
        return false;
    }

    std::stringstream ss(response);

    std::string userID_, root_, password_;
    getline(ss, userID_, '_');
    getline(ss, password_, '_');
    getline(ss, root_, '_');

    if ( QString::fromStdString(password_) != password ) {
        return false;
    }

    root = QString::fromStdString(root_);
    userID = QString::fromStdString(userID_);

    return true;
}

void authorization::cleanPassLog() {

    ui -> login -> setText("");
    ui -> password -> setText("");
}

void authorization::successfullyRegistered()
{
    ui -> statusAuthorization -> setText("Вы успешно зарегистрировались! Теперь вы можете авторизоваться.");
}

void authorization::on_registrButton_clicked()
{
    close();
    registr* regWindow = new registr;
    regWindow -> show();
}

