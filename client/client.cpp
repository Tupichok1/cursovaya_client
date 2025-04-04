#include "client.h"

client* client::Client = NULL;

client* client::getInstance() {

    if ( Client == NULL ) {
        Client = new client();
    }

    return Client;
}

client::client() {

    socket = new QTcpSocket;
    socket -> connectToHost("localhost", 1234);

    qDebug() << socket -> state();
    connect(socket, &QTcpSocket::readyRead, this, &client::slotReadyRead);
}

void client::slotReadyRead() {

    while ( socket -> bytesAvailable() > 0 ) {

        message = socket -> readAll();
    }
}

void client::sendCommand(const QString& command) {

    socket -> write(command.toUtf8());
}

QString client::takeResponse() {

    socket -> waitForReadyRead();
    return message;
}
