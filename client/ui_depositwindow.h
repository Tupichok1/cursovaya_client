/********************************************************************************
** Form generated from reading UI file 'depositwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITWINDOW_H
#define UI_DEPOSITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_depositWindow
{
public:
    QLabel *settingsOfDeposit;
    QPushButton *makeOrder;
    QPushButton *goBack;
    QLabel *resultOfOrder;
    QPushButton *chooseRubles;
    QPushButton *chooseYuan;
    QPushButton *chooseThreeMonth;
    QPushButton *chooseSixMonth;
    QPushButton *chooseTwelveMonth;
    QComboBox *chooseOtherMonth;
    QLineEdit *enterAmount;
    QListWidget *listWidget;
    QLabel *labelOfFinalAmount;
    QLabel *labelExchange;
    QLabel *exchange;
    QLabel *labelDuration;
    QLabel *labelOfPercent;
    QLabel *duration;
    QLabel *percent;
    QLabel *finalAmount;

    void setupUi(QDialog *depositWindow)
    {
        if (depositWindow->objectName().isEmpty())
            depositWindow->setObjectName(QString::fromUtf8("depositWindow"));
        depositWindow->resize(556, 532);
        depositWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
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
"}"));
        settingsOfDeposit = new QLabel(depositWindow);
        settingsOfDeposit->setObjectName(QString::fromUtf8("settingsOfDeposit"));
        settingsOfDeposit->setGeometry(QRect(30, 20, 151, 20));
        settingsOfDeposit->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: 400 13pt \"Cantarell\";"));
        makeOrder = new QPushButton(depositWindow);
        makeOrder->setObjectName(QString::fromUtf8("makeOrder"));
        makeOrder->setGeometry(QRect(190, 440, 151, 26));
        goBack = new QPushButton(depositWindow);
        goBack->setObjectName(QString::fromUtf8("goBack"));
        goBack->setGeometry(QRect(30, 440, 131, 26));
        resultOfOrder = new QLabel(depositWindow);
        resultOfOrder->setObjectName(QString::fromUtf8("resultOfOrder"));
        resultOfOrder->setGeometry(QRect(30, 380, 451, 18));
        resultOfOrder->setStyleSheet(QString::fromUtf8("color: black;\n"
"font: 400 13pt \"Cantarell\";"));
        chooseRubles = new QPushButton(depositWindow);
        chooseRubles->setObjectName(QString::fromUtf8("chooseRubles"));
        chooseRubles->setGeometry(QRect(30, 60, 87, 26));
        chooseRubles->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid gray;\n"
"    border-radius: 6px;\n"
"    min-width: 80px;\n"
"	font: 13pt \"Liberation Serif\";\n"
"	color: black;\n"
"	background-color: white\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border: 2px solid blue;\n"
"}"));
        chooseYuan = new QPushButton(depositWindow);
        chooseYuan->setObjectName(QString::fromUtf8("chooseYuan"));
        chooseYuan->setGeometry(QRect(130, 60, 87, 26));
        chooseYuan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid gray;\n"
"    border-radius: 6px;\n"
"    min-width: 80px;\n"
"	font: 13pt \"Liberation Serif\";\n"
"	color: black;\n"
"	background-color: white\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border: 2px solid blue;\n"
"}"));
        chooseThreeMonth = new QPushButton(depositWindow);
        chooseThreeMonth->setObjectName(QString::fromUtf8("chooseThreeMonth"));
        chooseThreeMonth->setGeometry(QRect(30, 110, 87, 41));
        chooseSixMonth = new QPushButton(depositWindow);
        chooseSixMonth->setObjectName(QString::fromUtf8("chooseSixMonth"));
        chooseSixMonth->setGeometry(QRect(140, 110, 87, 41));
        chooseTwelveMonth = new QPushButton(depositWindow);
        chooseTwelveMonth->setObjectName(QString::fromUtf8("chooseTwelveMonth"));
        chooseTwelveMonth->setGeometry(QRect(250, 110, 87, 41));
        chooseOtherMonth = new QComboBox(depositWindow);
        chooseOtherMonth->addItem(QString());
        chooseOtherMonth->addItem(QString());
        chooseOtherMonth->addItem(QString());
        chooseOtherMonth->addItem(QString());
        chooseOtherMonth->setObjectName(QString::fromUtf8("chooseOtherMonth"));
        chooseOtherMonth->setGeometry(QRect(360, 110, 121, 41));
        chooseOtherMonth->setStyleSheet(QString::fromUtf8("QListView {\n"
"	color: black;\n"
"	background-color: white;\n"
" 	border: 2px solid gray;\n"
"    border-radius: 6px;\n"
"    min-width: 80px;\n"
"}"));
        enterAmount = new QLineEdit(depositWindow);
        enterAmount->setObjectName(QString::fromUtf8("enterAmount"));
        enterAmount->setGeometry(QRect(30, 180, 451, 41));
        listWidget = new QListWidget(depositWindow);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 250, 451, 101));
        listWidget->setStyleSheet(QString::fromUtf8("QListView {\n"
"    border: 2px solid #ddd;\n"
"    border-radius: 6px;\n"
"    min-width: 80px;\n"
"	font: 13pt \"Liberation Serif\";\n"
"	color: black;\n"
"	background-color: #ddd\n"
"}"));
        labelOfFinalAmount = new QLabel(depositWindow);
        labelOfFinalAmount->setObjectName(QString::fromUtf8("labelOfFinalAmount"));
        labelOfFinalAmount->setGeometry(QRect(40, 260, 171, 18));
        labelOfFinalAmount->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 700 11pt \"Cantarell\";\n"
"	color: black;\n"
"	background-color: #ddd\n"
"}"));
        labelExchange = new QLabel(depositWindow);
        labelExchange->setObjectName(QString::fromUtf8("labelExchange"));
        labelExchange->setGeometry(QRect(60, 320, 66, 18));
        labelExchange->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 13pt \"Liberation Serif\";\n"
"	color: gray;\n"
"	background-color: #ddd\n"
"}"));
        exchange = new QLabel(depositWindow);
        exchange->setObjectName(QString::fromUtf8("exchange"));
        exchange->setGeometry(QRect(60, 290, 66, 18));
        exchange->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 13pt \"Liberation Serif\";\n"
"	color: black;\n"
"	background-color: #ddd\n"
"}"));
        labelDuration = new QLabel(depositWindow);
        labelDuration->setObjectName(QString::fromUtf8("labelDuration"));
        labelDuration->setGeometry(QRect(160, 320, 66, 18));
        labelDuration->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 13pt \"Liberation Serif\";\n"
"	color: gray;\n"
"	background-color: #ddd\n"
"}"));
        labelOfPercent = new QLabel(depositWindow);
        labelOfPercent->setObjectName(QString::fromUtf8("labelOfPercent"));
        labelOfPercent->setGeometry(QRect(240, 320, 66, 18));
        labelOfPercent->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 13pt \"Liberation Serif\";\n"
"	color: gray;\n"
"	background-color: #ddd\n"
"}"));
        duration = new QLabel(depositWindow);
        duration->setObjectName(QString::fromUtf8("duration"));
        duration->setGeometry(QRect(140, 290, 91, 20));
        duration->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 13pt \"Liberation Serif\";\n"
"	color: black;\n"
"	background-color: #ddd\n"
"}"));
        percent = new QLabel(depositWindow);
        percent->setObjectName(QString::fromUtf8("percent"));
        percent->setGeometry(QRect(240, 290, 66, 18));
        percent->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 13pt \"Liberation Serif\";\n"
"	color: black;\n"
"	background-color: #ddd\n"
"}"));
        finalAmount = new QLabel(depositWindow);
        finalAmount->setObjectName(QString::fromUtf8("finalAmount"));
        finalAmount->setGeometry(QRect(210, 260, 181, 18));
        finalAmount->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 13pt \"Liberation Serif\";\n"
"	color: black;\n"
"	background-color: #ddd\n"
"}"));

        retranslateUi(depositWindow);

        QMetaObject::connectSlotsByName(depositWindow);
    } // setupUi

    void retranslateUi(QDialog *depositWindow)
    {
        depositWindow->setWindowTitle(QCoreApplication::translate("depositWindow", "Dialog", nullptr));
        settingsOfDeposit->setText(QCoreApplication::translate("depositWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\262\320\272\320\273\320\260\320\264", nullptr));
        makeOrder->setText(QCoreApplication::translate("depositWindow", "\320\236\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\321\217\320\262\320\272\321\203", nullptr));
        goBack->setText(QCoreApplication::translate("depositWindow", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\262 \320\233\320\232", nullptr));
        resultOfOrder->setText(QString());
        chooseRubles->setText(QCoreApplication::translate("depositWindow", "\320\222 \321\200\321\203\320\261\320\273\321\217\321\205", nullptr));
        chooseYuan->setText(QCoreApplication::translate("depositWindow", "\320\222 \321\216\320\260\320\275\321\217\321\205", nullptr));
        chooseThreeMonth->setText(QCoreApplication::translate("depositWindow", "3 \320\274\320\265\321\201", nullptr));
        chooseSixMonth->setText(QCoreApplication::translate("depositWindow", "6 \320\274\320\265\321\201", nullptr));
        chooseTwelveMonth->setText(QCoreApplication::translate("depositWindow", "12 \320\274\320\265\321\201", nullptr));
        chooseOtherMonth->setItemText(0, QCoreApplication::translate("depositWindow", "\320\224\321\200\321\203\320\263\320\276\320\271 \321\201\321\200\320\276\320\272", nullptr));
        chooseOtherMonth->setItemText(1, QCoreApplication::translate("depositWindow", "2 \320\274\320\265\321\201\321\217\321\206\320\260", nullptr));
        chooseOtherMonth->setItemText(2, QCoreApplication::translate("depositWindow", "4 \320\274\320\265\321\201\321\217\321\206\320\260", nullptr));
        chooseOtherMonth->setItemText(3, QCoreApplication::translate("depositWindow", "5 \320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));

        labelOfFinalAmount->setText(QCoreApplication::translate("depositWindow", "\320\241\321\203\320\274\320\274\320\260 \320\262 \320\272\320\276\320\275\321\206\320\265 \321\201\321\200\320\276\320\272\320\260:", nullptr));
        labelExchange->setText(QCoreApplication::translate("depositWindow", "\320\222\320\260\320\273\321\216\321\202\320\260", nullptr));
        exchange->setText(QCoreApplication::translate("depositWindow", "\320\240\321\203\320\261\320\273\320\270", nullptr));
        labelDuration->setText(QCoreApplication::translate("depositWindow", "\320\241\321\200\320\276\320\272", nullptr));
        labelOfPercent->setText(QCoreApplication::translate("depositWindow", "\320\241\321\202\320\260\320\262\320\272\320\260", nullptr));
        duration->setText(QString());
        percent->setText(QString());
        finalAmount->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class depositWindow: public Ui_depositWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITWINDOW_H
