/********************************************************************************
** Form generated from reading UI file 'ordersWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERSWINDOW_H
#define UI_ORDERSWINDOW_H

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

class Ui_ordersWindow
{
public:
    QAction *exitFromAccount;
    QAction *exitMenu;
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QLabel *label;
    QLineEdit *enterID;
    QPushButton *approveOrder;
    QPushButton *rejectOrder;
    QPushButton *saveTable;
    QLabel *label_2;
    QLabel *status;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ordersWindow)
    {
        if (ordersWindow->objectName().isEmpty())
            ordersWindow->setObjectName(QString::fromUtf8("ordersWindow"));
        ordersWindow->resize(800, 560);
        ordersWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
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
        exitFromAccount = new QAction(ordersWindow);
        exitFromAccount->setObjectName(QString::fromUtf8("exitFromAccount"));
        exitMenu = new QAction(ordersWindow);
        exitMenu->setObjectName(QString::fromUtf8("exitMenu"));
        centralwidget = new QWidget(ordersWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(45, 81, 721, 261));
        tableWidget->setStyleSheet(QString::fromUtf8("color: black;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 380, 151, 18));
        enterID = new QLineEdit(centralwidget);
        enterID->setObjectName(QString::fromUtf8("enterID"));
        enterID->setGeometry(QRect(150, 380, 271, 26));
        approveOrder = new QPushButton(centralwidget);
        approveOrder->setObjectName(QString::fromUtf8("approveOrder"));
        approveOrder->setGeometry(QRect(150, 430, 131, 26));
        rejectOrder = new QPushButton(centralwidget);
        rejectOrder->setObjectName(QString::fromUtf8("rejectOrder"));
        rejectOrder->setGeometry(QRect(300, 430, 121, 26));
        saveTable = new QPushButton(centralwidget);
        saveTable->setObjectName(QString::fromUtf8("saveTable"));
        saveTable->setGeometry(QRect(500, 380, 231, 71));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 50, 221, 18));
        label_2->setStyleSheet(QString::fromUtf8("font: 450 13pt \"Fira Code\";"));
        status = new QLabel(centralwidget);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(50, 490, 191, 18));
        ordersWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ordersWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ordersWindow->setStatusBar(statusbar);

        retranslateUi(ordersWindow);

        QMetaObject::connectSlotsByName(ordersWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ordersWindow)
    {
        ordersWindow->setWindowTitle(QCoreApplication::translate("ordersWindow", "MainWindow", nullptr));
        exitFromAccount->setText(QCoreApplication::translate("ordersWindow", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260", nullptr));
        exitMenu->setText(QCoreApplication::translate("ordersWindow", "\320\222\321\213\320\271\321\202\320\270 \320\262 \320\274\320\265\320\275\321\216", nullptr));
        label->setText(QCoreApplication::translate("ordersWindow", "ID \320\267\320\260\321\217\320\262\320\272\320\270", nullptr));
        approveOrder->setText(QCoreApplication::translate("ordersWindow", "\320\236\320\264\320\276\320\261\321\200\320\270\321\202\321\214", nullptr));
        rejectOrder->setText(QCoreApplication::translate("ordersWindow", "\320\236\321\202\320\272\320\273\320\276\320\275\320\270\321\202\321\214", nullptr));
        saveTable->setText(QCoreApplication::translate("ordersWindow", "\320\255\320\272\321\201\320\277\320\276\321\200\321\202 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("ordersWindow", "\320\222\321\201\320\265 \320\276\321\202\320\272\321\200\321\213\321\202\321\213\320\265 \320\262\320\272\320\273\320\260\320\264\321\213", nullptr));
        status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ordersWindow: public Ui_ordersWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERSWINDOW_H
