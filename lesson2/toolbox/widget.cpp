#include "widget.h"

#include <QVboxLayout>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    tb = new QToolBox;

    pb[0] = new QPushButton("aaa");
    pb[1] = new QPushButton("bbb");
    pb[2] = new QPushButton("ccc");

    tb->addItem(pb[0], "111");
    tb->addItem(pb[1], "222");
    tb->addItem(pb[2], "333");

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(tb);
    this->setLayout(vbox);
}

Widget::~Widget()
{

}
