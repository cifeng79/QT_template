#include "widget.h"

#include <QVBoxLayout>
#include <QHostAddress>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    te = new QTextEdit;
    le = new QLineEdit;
    pb = new QPushButton("send");

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(te);
    vbox->addWidget(le);
    vbox->addWidget(pb);
    this->setLayout(vbox);

    tcpsocket = new QTcpSocket;
    //connect to server
    tcpsocket->connectToHost(QHostAddress("192.168.64.1"), 8888);

    connect(pb, SIGNAL(clicked(bool)), this, SLOT(senddata()));
    connect(tcpsocket, SIGNAL(readyRead()), this, SLOT(recvdata()));

}

Widget::~Widget()
{

}
