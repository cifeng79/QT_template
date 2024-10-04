#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QTcpServer>
#include <QTcpSocket>

class Widget : public QWidget
{
    Q_OBJECT

public slots:
    void senddata()
    {
        tcpsocket->write(le->text().toStdString().c_str());
    }

    void recvdata()
    {
        QByteArray buf = tcpsocket->readAll();
        te->append(buf);
    }

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QTextEdit *te;
    QLineEdit *le;
    QPushButton *pb;

    QTcpSocket *tcpsocket;
};

#endif // WIDGET_H
