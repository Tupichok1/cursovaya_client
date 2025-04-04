/********************************************************************************
** Form generated from reading UI file 'dumpwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DUMPWINDOW_H
#define UI_DUMPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_dumpWindow
{
public:
    QTableWidget *dumpTable;
    QPushButton *recoverButton;
    QPushButton *dumpButton;
    QLineEdit *numberOfDump;
    QLabel *recoverStatus;

    void setupUi(QDialog *dumpWindow)
    {
        if (dumpWindow->objectName().isEmpty())
            dumpWindow->setObjectName(QString::fromUtf8("dumpWindow"));
        dumpWindow->resize(684, 480);
        dumpWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
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
        dumpTable = new QTableWidget(dumpWindow);
        dumpTable->setObjectName(QString::fromUtf8("dumpTable"));
        dumpTable->setGeometry(QRect(10, 50, 361, 411));
        dumpTable->setStyleSheet(QString::fromUtf8("color: black;"));
        recoverButton = new QPushButton(dumpWindow);
        recoverButton->setObjectName(QString::fromUtf8("recoverButton"));
        recoverButton->setGeometry(QRect(410, 140, 241, 41));
        dumpButton = new QPushButton(dumpWindow);
        dumpButton->setObjectName(QString::fromUtf8("dumpButton"));
        dumpButton->setGeometry(QRect(410, 385, 251, 51));
        numberOfDump = new QLineEdit(dumpWindow);
        numberOfDump->setObjectName(QString::fromUtf8("numberOfDump"));
        numberOfDump->setGeometry(QRect(410, 85, 241, 31));
        recoverStatus = new QLabel(dumpWindow);
        recoverStatus->setObjectName(QString::fromUtf8("recoverStatus"));
        recoverStatus->setGeometry(QRect(410, 40, 241, 20));

        retranslateUi(dumpWindow);

        QMetaObject::connectSlotsByName(dumpWindow);
    } // setupUi

    void retranslateUi(QDialog *dumpWindow)
    {
        dumpWindow->setWindowTitle(QCoreApplication::translate("dumpWindow", "Dialog", nullptr));
        recoverButton->setText(QCoreApplication::translate("dumpWindow", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \320\276\321\202\320\272\320\260\321\202 \320\221\320\224", nullptr));
        dumpButton->setText(QCoreApplication::translate("dumpWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\264\320\265\320\271\321\201\321\202\320\262\321\203\321\216\321\211\321\203\321\216 \320\221\320\224", nullptr));
        recoverStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dumpWindow: public Ui_dumpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DUMPWINDOW_H
