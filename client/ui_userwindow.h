/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userWindow
{
public:
    QAction *action;
    QAction *exitFromAccount;
    QWidget *centralwidget;
    QPushButton *makeOrder;
    QTableWidget *tableWidget;
    QPushButton *makeSave;
    QPushButton *closeDeposit;
    QLineEdit *depositForClose;
    QLabel *status;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *userWindow)
    {
        if (userWindow->objectName().isEmpty())
            userWindow->setObjectName(QString::fromUtf8("userWindow"));
        userWindow->resize(615, 530);
        userWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"  background-color: #fff;\n"
"}\n"
"QPushButton {\n"
"    border: 2px solid gray;\n"
"    border-radius: 6px;\n"
"    min-width: 80px;\n"
"	font: 13pt \"Liberation Serif\";\n"
"	color: black;\n"
"	background-color: white\n"
"}\n"
"QPushButton:pressed {\n"
"    border: 2px solid blue;\n"
"}\n"
"QComboBox {\n"
"    border: 2px solid gray;\n"
"    border-radius: 6px;\n"
"    min-width: 80px;\n"
"	font: 13pt \"Liberation Serif\";\n"
"	color: black;\n"
"	background-color: white;\n"
"}\n"
"QLineEdit {\n"
"	color: black;\n"
"	background-color: #ddd;\n"
" 	border-radius: 8px;\n"
" 	border: 1px solid #e0e4e7;\n"
"	padding: 5px 15px;\n"
"}\n"
"QTableWidget {\n"
"	color: black;\n"
"}\n"
"QLabel {\n"
"	color: black;\n"
"	font: 11pt \"DejaVu Math TeX Gyre\";\n"
"}\n"
"QMenu {\n"
"	color: black;\n"
"	border: 2px solid gray;\n"
"	border-radius: 12px 12px 0px 0px;\n"
"    min-width: 80px;\n"
"}\n"
"QMenuBar {\n"
"	color: black;\n"
"	border: 2px solid gray;\n"
"    min-width: 80px;\n"
"}"));
        action = new QAction(userWindow);
        action->setObjectName(QString::fromUtf8("action"));
        exitFromAccount = new QAction(userWindow);
        exitFromAccount->setObjectName(QString::fromUtf8("exitFromAccount"));
        centralwidget = new QWidget(userWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        makeOrder = new QPushButton(centralwidget);
        makeOrder->setObjectName(QString::fromUtf8("makeOrder"));
        makeOrder->setGeometry(QRect(20, 360, 251, 41));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 90, 591, 241));
        tableWidget->setStyleSheet(QString::fromUtf8("color: black;"));
        makeSave = new QPushButton(centralwidget);
        makeSave->setObjectName(QString::fromUtf8("makeSave"));
        makeSave->setGeometry(QRect(290, 360, 271, 41));
        closeDeposit = new QPushButton(centralwidget);
        closeDeposit->setObjectName(QString::fromUtf8("closeDeposit"));
        closeDeposit->setGeometry(QRect(20, 410, 251, 41));
        depositForClose = new QLineEdit(centralwidget);
        depositForClose->setObjectName(QString::fromUtf8("depositForClose"));
        depositForClose->setGeometry(QRect(290, 410, 271, 41));
        status = new QLabel(centralwidget);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(20, 470, 311, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 271, 18));
        label->setStyleSheet(QString::fromUtf8("font: 450 13pt \"Fira Code\";"));
        userWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(userWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        userWindow->setStatusBar(statusbar);

        retranslateUi(userWindow);

        QMetaObject::connectSlotsByName(userWindow);
    } // setupUi

    void retranslateUi(QMainWindow *userWindow)
    {
        userWindow->setWindowTitle(QCoreApplication::translate("userWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("userWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        exitFromAccount->setText(QCoreApplication::translate("userWindow", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260", nullptr));
        makeOrder->setText(QCoreApplication::translate("userWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\262\320\272\320\273\320\260\320\264", nullptr));
        makeSave->setText(QCoreApplication::translate("userWindow", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", nullptr));
        closeDeposit->setText(QCoreApplication::translate("userWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\262\320\272\320\273\320\260\320\264", nullptr));
        status->setText(QString());
        label->setText(QCoreApplication::translate("userWindow", "\320\222\320\260\321\210\320\270 \320\276\321\202\320\272\321\200\321\213\321\202\321\213\320\265 \320\262\320\272\320\273\320\260\320\264\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userWindow: public Ui_userWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
