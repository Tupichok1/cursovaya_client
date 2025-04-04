#include "registr.h"
#include "authorization.h"
#include <QCryptographicHash>
#include <QMenuBar>
#include <QRegExpValidator>

registr::registr(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registr)
{
    ui->setupUi(this);
    ui -> enterPass -> setEchoMode(QLineEdit::Password);
    ui -> repeatPassword -> setEchoMode(QLineEdit::Password);
    ui -> status -> setAlignment(Qt::AlignCenter);

    this -> setWindowTitle("Регистрация");

    ui -> enterPass -> setPlaceholderText(QString("Введите пароль. Минимальный размер - 6"));
    ui -> repeatPassword -> setPlaceholderText(QString("Повторите пароль"));
    ui -> enterName -> setPlaceholderText(QString("Введите ваше имя"));
    ui -> enterSurname -> setPlaceholderText(QString("Введите вашу фамилию"));
    ui -> enterLogin -> setPlaceholderText(QString("Введите логин. Минимальный размер - 6"));

    QMenuBar *menubar = new QMenuBar(this);
    QMenu *menu1 = menubar -> addMenu("Settings");
    QAction* exitMenu = menu1->addAction("Обратно к авторизации");

    connect(exitMenu, &QAction::triggered, this, &registr::exitMenu);

    ui -> enterName -> setValidator(new QRegExpValidator(QRegExp("[A-Za-z]+"), this));
    ui -> enterSurname -> setValidator(new QRegExpValidator(QRegExp("[A-Za-z]+"), this));
    ui -> enterLogin -> setValidator(new QRegExpValidator(QRegExp("[A-Za-z\\d]+"), this));
    ui -> enterPass -> setValidator(new QRegExpValidator(QRegExp("[A-Za-z\\d]+"), this));
    ui -> repeatPassword -> setValidator(new QRegExpValidator(QRegExp("[A-Za-z\\d]+"), this));

    CL = client::getInstance();
}

void registr::exitMenu() {

    close();
    authorization* window = new authorization();
    window -> show();
}

registr::~registr()
{
    delete ui;
}

void registr::on_registration_clicked()
{
    if ( isEmpty() ) {
        ui -> status -> setText("Не все поля заполнены!");
        return;
    }

    if ( findErrors() ) {
        clean();
        return;
    }

    QString userName = ui -> enterName -> text();
    QString userSurname = ui -> enterSurname -> text();
    QString userLogin = ui -> enterLogin -> text();
    QString userPass = ui -> enterPass -> text();

    QString hash = QCryptographicHash::hash(userPass.toUtf8(), QCryptographicHash::Sha256).toHex();

    CL -> sendCommand("reg_acc " + userName + " " + userSurname + " " + userLogin + " " + hash);
    CL -> takeResponse();
    CL -> sendCommand("make_dump");
    CL -> takeResponse();

    close();

    authorization* exitToAuthorization = new authorization;
    exitToAuthorization -> successfullyRegistered();
    exitToAuthorization -> show();
}

bool registr::isEmpty() {
    if ( ui -> enterName -> text() == "" ) {
        return true;
    }
    if ( ui -> enterSurname -> text() == "" ) {
        return true;
    }
    if ( ui -> enterLogin -> text() == "" ) {
        return true;
    }
    if ( ui -> enterPass -> text() == "" ) {
        return true;
    }
    if ( ui -> repeatPassword -> text() == "" ) {
        return true;
    }
    return false;
}

bool registr::findErrors() {

    if ( ui -> enterPass -> text() != ui -> repeatPassword -> text() ) {
        ui -> status -> setText("Пароли не совпадают!");
        return true;
    }

    if ( (ui -> enterPass -> text()).size() < 6 ) {
        ui -> status -> setText("Слишком короткий пароль!");
        return true;
    }

    if ( ui -> enterLogin -> text().size() < 6 ) {
        ui -> status -> setText("Слишком короткий логин!");
        return true;
    }

    else {

        CL -> sendCommand("check_user " + ui -> enterLogin -> text());
        QString response = CL -> takeResponse();

        if ( response != "false" ) {
            ui -> status -> setText("Пользователь с таким логином уже существует!");
            return true;
        }
    }

    return false;
}

void registr::clean() {

    ui -> enterPass -> setText("");
    ui -> enterName -> setText("");
    ui -> enterSurname -> setText("");
    ui -> enterLogin -> setText("");
    ui -> repeatPassword -> setText("");
}

