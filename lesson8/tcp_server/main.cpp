#include <QCoreApplication>

#include "tcpServer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    tcpServer server;

    return a.exec();
}
