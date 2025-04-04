/********************************************************************************
** Form generated from reading UI file 'registr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTR_H
#define UI_REGISTR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registr
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *name;
    QLineEdit *enterName;
    QLabel *pass;
    QLineEdit *enterSurname;
    QLabel *phoneNumber;
    QLineEdit *enterLogin;
    QLabel *pass_2;
    QLineEdit *enterPass;
    QLabel *repeatPass;
    QLineEdit *repeatPassword;
    QPushButton *registration;
    QLabel *status;

    void setupUi(QWidget *registr)
    {
        if (registr->objectName().isEmpty())
            registr->setObjectName(QString::fromUtf8("registr"));
        registr->resize(497, 325);
        registr->setStyleSheet(QString::fromUtf8("QObject {\n"
"  background-color: #fff;\n"
"}\n"
"QWidget {\n"
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
"}\n"
"QMenu {\n"
"	color: black;\n"
"	border: 2px so"
                        "lid gray;\n"
"	border-radius: 12px 12px 0px 0px;\n"
"    min-width: 80px;\n"
"}\n"
"QMenuBar {\n"
"	color: black;\n"
"	border: 2px solid gray;\n"
"    min-width: 80px;\n"
"}"));
        formLayoutWidget = new QWidget(registr);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 50, 471, 262));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        name = new QLabel(formLayoutWidget);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout->setWidget(2, QFormLayout::LabelRole, name);

        enterName = new QLineEdit(formLayoutWidget);
        enterName->setObjectName(QString::fromUtf8("enterName"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(221, 221, 221, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(0, 0, 0, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        enterName->setPalette(palette);
        enterName->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"color : black;\n"
"background: #ddd\n"
"}"));

        formLayout->setWidget(2, QFormLayout::FieldRole, enterName);

        pass = new QLabel(formLayoutWidget);
        pass->setObjectName(QString::fromUtf8("pass"));

        formLayout->setWidget(3, QFormLayout::LabelRole, pass);

        enterSurname = new QLineEdit(formLayoutWidget);
        enterSurname->setObjectName(QString::fromUtf8("enterSurname"));
        enterSurname->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"color : black;\n"
"background-color: #ddd;\n"
"}"));

        formLayout->setWidget(3, QFormLayout::FieldRole, enterSurname);

        phoneNumber = new QLabel(formLayoutWidget);
        phoneNumber->setObjectName(QString::fromUtf8("phoneNumber"));

        formLayout->setWidget(4, QFormLayout::LabelRole, phoneNumber);

        enterLogin = new QLineEdit(formLayoutWidget);
        enterLogin->setObjectName(QString::fromUtf8("enterLogin"));
        enterLogin->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"color : black;\n"
"background-color: #ddd;\n"
"}"));

        formLayout->setWidget(4, QFormLayout::FieldRole, enterLogin);

        pass_2 = new QLabel(formLayoutWidget);
        pass_2->setObjectName(QString::fromUtf8("pass_2"));

        formLayout->setWidget(5, QFormLayout::LabelRole, pass_2);

        enterPass = new QLineEdit(formLayoutWidget);
        enterPass->setObjectName(QString::fromUtf8("enterPass"));
        enterPass->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"color : black;\n"
"background-color: #ddd;\n"
"}"));

        formLayout->setWidget(5, QFormLayout::FieldRole, enterPass);

        repeatPass = new QLabel(formLayoutWidget);
        repeatPass->setObjectName(QString::fromUtf8("repeatPass"));

        formLayout->setWidget(6, QFormLayout::LabelRole, repeatPass);

        repeatPassword = new QLineEdit(formLayoutWidget);
        repeatPassword->setObjectName(QString::fromUtf8("repeatPassword"));
        repeatPassword->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"color : black;\n"
"background-color: #ddd;\n"
"}"));

        formLayout->setWidget(6, QFormLayout::FieldRole, repeatPassword);

        registration = new QPushButton(formLayoutWidget);
        registration->setObjectName(QString::fromUtf8("registration"));

        formLayout->setWidget(7, QFormLayout::SpanningRole, registration);

        status = new QLabel(formLayoutWidget);
        status->setObjectName(QString::fromUtf8("status"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, status);


        retranslateUi(registr);

        QMetaObject::connectSlotsByName(registr);
    } // setupUi

    void retranslateUi(QWidget *registr)
    {
        registr->setWindowTitle(QCoreApplication::translate("registr", "Form", nullptr));
        name->setText(QCoreApplication::translate("registr", "\320\230\320\274\321\217", nullptr));
        enterName->setText(QString());
        pass->setText(QCoreApplication::translate("registr", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        phoneNumber->setText(QCoreApplication::translate("registr", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        pass_2->setText(QCoreApplication::translate("registr", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        repeatPass->setText(QCoreApplication::translate("registr", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        registration->setText(QCoreApplication::translate("registr", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class registr: public Ui_registr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTR_H
