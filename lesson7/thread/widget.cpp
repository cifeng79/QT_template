#include "widget.h"

#include <QVBoxLayout>
#include <QThread>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    p1 = new QProgressBar;
    p2 = new QProgressBar;

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(p1);
    vbox->addWidget(p2);
    setLayout(vbox);

    t1 = new myThread1;
    t2 = new myThread2;

    connect(t1, SIGNAL(download(int)), p1, SLOT(setValue(int)));
    connect(t2, SIGNAL(download(int)), p2, SLOT(setValue(int)));

    t1->start();
    t2->start();
}

Widget::~Widget()
{

}
