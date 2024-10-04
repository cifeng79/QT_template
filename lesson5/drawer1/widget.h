#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPainter>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

    void mousePressEvent(QMouseEvent *event)
    {
        startp = event->pos();

    }

    void mouseReleaseEvent(QMouseEvent *event)
    {
       saveit = true;
       update();//
    }

    void mouseMoveEvent(QMouseEvent *event)
    {
       endp = event->pos();
       update();//激发绘制事件
    }

    void paintEvent(QPaintEvent *event)
    {
        if(saveit)
        {
            QPainter px(pix);
            px.drawLine(startp,endp);
            saveit = false;
        }

        QPainter p(this);
        p.drawPixmap(0,0,*pix);
        p.drawLine(startp,endp);
    }



private:
    QPoint startp;
    QPoint endp;
    QPixmap *pix;
    bool saveit;

};

#endif // WIDGET_H
