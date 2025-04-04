/********************************************************************************
** Form generated from reading UI file 'sqlwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLWINDOW_H
#define UI_SQLWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_sqlwindow
{
public:
    QLineEdit *sqlQuery;
    QTableWidget *resultOfSelect;
    QLabel *resultOfQuery;

    void setupUi(QDialog *sqlwindow)
    {
        if (sqlwindow->objectName().isEmpty())
            sqlwindow->setObjectName(QString::fromUtf8("sqlwindow"));
        sqlwindow->resize(622, 441);
        sqlwindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
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
        sqlQuery = new QLineEdit(sqlwindow);
        sqlQuery->setObjectName(QString::fromUtf8("sqlQuery"));
        sqlQuery->setGeometry(QRect(20, 40, 331, 26));
        resultOfSelect = new QTableWidget(sqlwindow);
        resultOfSelect->setObjectName(QString::fromUtf8("resultOfSelect"));
        resultOfSelect->setGeometry(QRect(20, 100, 571, 311));
        resultOfQuery = new QLabel(sqlwindow);
        resultOfQuery->setObjectName(QString::fromUtf8("resultOfQuery"));
        resultOfQuery->setGeometry(QRect(20, 100, 561, 301));
        resultOfQuery->setStyleSheet(QString::fromUtf8("color: black;"));

        retranslateUi(sqlwindow);

        QMetaObject::connectSlotsByName(sqlwindow);
    } // setupUi

    void retranslateUi(QDialog *sqlwindow)
    {
        sqlwindow->setWindowTitle(QCoreApplication::translate("sqlwindow", "Dialog", nullptr));
        resultOfQuery->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class sqlwindow: public Ui_sqlwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLWINDOW_H
