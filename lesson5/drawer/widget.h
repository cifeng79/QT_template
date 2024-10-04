#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPaintEvent>
#include <QDebug>
#include <QPainter>
#include <QTimerEvent>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

    void paintEvent(QPaintEvent *event)
    {
        QPainter p(this);
        p.translate(this->width()/2, this->height()/2);
        p.drawEllipse(QPoint(0,0), 100, 100);

        p.rotate(i++*10);
        p.drawLine(0,0,50,50);
    }

    void timerEvent(QTimerEvent *event)
    {
        update();//激发1次强制刷新，激活paintEvent
    }

private:
    int i;
};

#endif // WIDGET_H
