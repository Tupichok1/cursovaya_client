/********************************************************************************
** Form generated from reading UI file 'authorization.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION_H
#define UI_AUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_authorization
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *statusAuthorization;
    QLineEdit *login;
    QLineEdit *password;
    QPushButton *registrButton;
    QPushButton *authorizationButton;

    void setupUi(QDialog *authorization)
    {
        if (authorization->objectName().isEmpty())
            authorization->setObjectName(QString::fromUtf8("authorization"));
        authorization->resize(459, 241);
        authorization->setStyleSheet(QString::fromUtf8("QWidget {\n"
"  background-color: #fff;\n"
"}\n"
"QLabel {\n"
"  color: #464d55;\n"
"  font-weight: 600;\n"
"}\n"
"QLabel#heading {\n"
"  color: #0f1925;\n"
"  font-size: 18px;\n"
"  margin-bottom: 10px;\n"
"}\n"
"\n"
"QLabel#subheading {\n"
"  color: #0f1925;\n"
"  font-size: 12px;\n"
"  font-weight: normal;\n"
"  margin-bottom: 10px;\n"
"}\n"
"QLineEdit {\n"
"  border-radius: 8px;\n"
"  border: 1px solid #e0e4e7;\n"
"  padding: 5px 15px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  border: 1px solid #d0e3ff;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"  color: #767e89;\n"
"}\n"
"QPushButton {\n"
"  background-color: #0d6efd;\n"
"  color: #fff;\n"
"  font-weight: 600;\n"
"  border-radius: 8px;\n"
"  border: 1px solid #0d6efd;\n"
"  padding: 5px 15px;\n"
"  margin-top: 10px;\n"
"  outline: 0px;\n"
"}\n"
"QPushButton:hover,\n"
"QPushButton:focus {\n"
"  background-color: #0b5ed7;\n"
"  border: 3px solid #9ac3fe;\n"
"}"));
        label = new QLabel(authorization);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 9, 49, 18));
        label_2 = new QLabel(authorization);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(9, 47, 53, 18));
        statusAuthorization = new QLabel(authorization);
        statusAuthorization->setObjectName(QString::fromUtf8("statusAuthorization"));
        statusAuthorization->setGeometry(QRect(9, 85, 441, 55));
        login = new QLineEdit(authorization);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(70, 10, 371, 32));
        login->setStyleSheet(QString::fromUtf8("color: black"));
        password = new QLineEdit(authorization);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(68, 47, 371, 32));
        password->setStyleSheet(QString::fromUtf8("color: black"));
        registrButton = new QPushButton(authorization);
        registrButton->setObjectName(QString::fromUtf8("registrButton"));
        registrButton->setGeometry(QRect(9, 192, 431, 40));
        authorizationButton = new QPushButton(authorization);
        authorizationButton->setObjectName(QString::fromUtf8("authorizationButton"));
        authorizationButton->setGeometry(QRect(9, 146, 431, 40));

        retranslateUi(authorization);

        QMetaObject::connectSlotsByName(authorization);
    } // setupUi

    void retranslateUi(QDialog *authorization)
    {
        authorization->setWindowTitle(QCoreApplication::translate("authorization", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("authorization", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        label_2->setText(QCoreApplication::translate("authorization", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        statusAuthorization->setText(QString());
        registrButton->setText(QCoreApplication::translate("authorization", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        authorizationButton->setText(QCoreApplication::translate("authorization", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class authorization: public Ui_authorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION_H
