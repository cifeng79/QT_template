#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QProgressBar>
#include "myThread1.h"
#include "myThread2.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QProgressBar *p1, *p2;
    myThread1 *t1;
    myThread2 *t2;
};

#endif // WIDGET_H
