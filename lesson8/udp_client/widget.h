#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QUdpSocket>
#include <QHostAddress>

class Widget : public QWidget
{
    Q_OBJECT
public slots:
    void senddata()
    {
        udpsock->writeDatagram(le->text().toStdString().c_str(), QHostAddress("192.168.64.1"), 8888);
    }

    void readdata()
    {
        QByteArray datagram;
        datagram.resize(udpsock->pendingDatagramSize());
        QHostAddress sender;
        quint16 senderPort;

        udpsock->readDatagram(datagram.data(), datagram.size(),
                                          &sender, &senderPort);

        te->append(datagram);
    }

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QTextEdit *te;
    QLineEdit *le;
    QPushButton *pb;

    QUdpSocket *udpsock;
};

#endif // WIDGET_H
