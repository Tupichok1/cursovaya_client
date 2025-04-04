#ifndef REGISTRATIONWINDOW_H
#define REGISTRATIONWINDOW_H

#include <QDialog>

namespace Ui {
class registrationWindow;
}

class registrationWindow : public QDialog
{
    Q_OBJECT

public:
    explicit registrationWindow(QWidget *parent = nullptr);
    ~registrationWindow();

private:
    Ui::registrationWindow *ui;
};

#endif // REGISTRATIONWINDOW_H
