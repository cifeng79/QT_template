#ifndef UDP_SERVER_H
#define UDP_SERVER_H

#include <QObject>
#include <QUdpSocket>
#include <QDebug>
#include <iostream>

class udpServer : public QObject
{
    Q_OBJECT

public:
    explicit udpServer(QObject *parent = 0);
    void init()
    {
        udpSocket = new QUdpSocket(this);
        udpSocket->bind(QHostAddress::AnyIPv4, 8888);

        connect(udpSocket, SIGNAL(readyRead()), this, SLOT(readPendingDatagrams()));
        qDebug()<<"init...";
    }

signals:

public slots:
    void readPendingDatagrams()
    {
        while(udpSocket->hasPendingDatagrams())
        {
            QByteArray datagram;
            datagram.resize(udpSocket->pendingDatagramSize());
            QHostAddress sender;
            quint16 senderPort;

            udpSocket->readDatagram(datagram.data(), datagram.size(),
                                          &sender, &senderPort);
            qDebug()<< "recv:" <<datagram;
            udpSocket->writeDatagram(datagram.data(), datagram.size(),
                                          sender, senderPort);
        }
    }

private:
    QUdpSocket *udpSocket;
};

#endif // UDP_SERVER_H
