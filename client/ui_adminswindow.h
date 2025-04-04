/********************************************************************************
** Form generated from reading UI file 'adminswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSWINDOW_H
#define UI_ADMINSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminsWindow
{
public:
    QPushButton *ordersButton;
    QPushButton *dumpButton;
    QPushButton *SQLButton;

    void setupUi(QDialog *adminsWindow)
    {
        if (adminsWindow->objectName().isEmpty())
            adminsWindow->setObjectName(QString::fromUtf8("adminsWindow"));
        adminsWindow->resize(400, 300);
        adminsWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
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
        adminsWindow->setModal(false);
        ordersButton = new QPushButton(adminsWindow);
        ordersButton->setObjectName(QString::fromUtf8("ordersButton"));
        ordersButton->setGeometry(QRect(60, 200, 261, 41));
        dumpButton = new QPushButton(adminsWindow);
        dumpButton->setObjectName(QString::fromUtf8("dumpButton"));
        dumpButton->setGeometry(QRect(60, 130, 261, 41));
        SQLButton = new QPushButton(adminsWindow);
        SQLButton->setObjectName(QString::fromUtf8("SQLButton"));
        SQLButton->setGeometry(QRect(60, 60, 261, 41));

        retranslateUi(adminsWindow);

        QMetaObject::connectSlotsByName(adminsWindow);
    } // setupUi

    void retranslateUi(QDialog *adminsWindow)
    {
        adminsWindow->setWindowTitle(QCoreApplication::translate("adminsWindow", "Dialog", nullptr));
        ordersButton->setText(QCoreApplication::translate("adminsWindow", "\320\240\320\260\320\261\320\276\321\202\320\260 \321\201 \320\267\320\260\321\217\320\262\320\272\320\260\320\274\320\270", nullptr));
        dumpButton->setText(QCoreApplication::translate("adminsWindow", "\320\240\320\260\320\261\320\276\321\202\320\260 \321\201 \320\272\320\276\320\277\320\270\321\217\320\274\320\270 \320\221\320\224", nullptr));
        SQLButton->setText(QCoreApplication::translate("adminsWindow", "\320\235\320\260\320\277\320\270\321\201\320\260\320\275\320\270\320\265 SQl-\320\267\320\260\320\277\321\200\320\276\321\201\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminsWindow: public Ui_adminsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSWINDOW_H
