#include "tcpServer.h"
#include <QHostAddress>

tcpServer::tcpServer(QObject *parent) : QObject(parent)
{
    ser = new QTcpServer;
    ser->listen(QHostAddress::AnyIPv4, 8888);
    connect(ser, SIGNAL(newConnection()), this, SLOT(newconnect()));
    //开始监听
    ser->waitForNewConnection();

}
