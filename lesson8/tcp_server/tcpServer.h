#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>

//需要支持信号与槽，所以基类为QObject
class tcpServer : public QObject
{
    Q_OBJECT
public:
    explicit tcpServer(QObject *parent = 0);

signals:

public slots:
    void newconnect()
    {
        qDebug()<<"connected";
        clientsock = ser->nextPendingConnection();
        connect(clientsock, SIGNAL(readyRead()), this, SLOT(readdata()));
    }

    void readdata()
    {
        QByteArray buf = clientsock->readAll();
        qDebug()<<"recv:"<<buf;
        clientsock->write(buf);
    }

private:
    QTcpServer *ser;
    QTcpSocket *clientsock;

};

#endif // TCPSERVER_H
