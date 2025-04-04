#ifndef CLIENT_H
#define CLIENT_H

#include <QTcpSocket>
#include <QObject>

class client : public QObject
{
    //Q_OBJECT

private:
    client();
    QTcpSocket* socket;
    QString message;
    static client* Client;

public:
    static client* getInstance();
    void slotReadyRead();
    void sendCommand(const QString& command);
    QString takeResponse();
};


#endif // CLIENT_H
