#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QWheelEvent>
#include <QTimerEvent>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

    void mousePressEvent(QMouseEvent *event)
    {
        qDebug()<<"mousepress"<<event->pos();//打印鼠标按下坐标
    }

    void mouseMoveEvent(QMouseEvent *event)
    {
        qDebug()<<"moving:"<<event->pos();//打印鼠标移动坐标
    }

    void keyPressEvent(QKeyEvent *event)
    {
        qDebug()<<"Key Press:"<<event->key();//打印键盘按下值
    }

    void wheelEvent(QWheelEvent *event)
    {
        qDebug()<<"whell:"<<event->delta();//打印滚轮值
    }

    void timerEvent(QTimerEvent *event)
    {
        qDebug()<<"timer:time is already";//打印定时器输出
    }
};

#endif // WIDGET_H
