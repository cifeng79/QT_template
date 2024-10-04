#include "widget.h"
#include <QVBoxLayout>

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

    udpsock = new QUdpSocket;
    connect(pb, SIGNAL(clicked(bool)), this, SLOT(senddata()));
    connect(udpsock, SIGNAL(readyRead()), this, SLOT(readdata()));

}

Widget::~Widget()
{

}
