#include "widget.h"

#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    gb = new QGroupBox("choice",this);//容器

    r1 = new QRadioButton("aaa");
    r2 = new QRadioButton("bbb");
    r3 = new QRadioButton("ccc");

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(r1);
    vbox->addWidget(r2);
    vbox->addWidget(r3);

    gb->setLayout(vbox);

    QVBoxLayout *mainbox = new QVBoxLayout;
    mainbox->addWidget(gb);
    this->setLayout(mainbox);
}

Widget::~Widget()
{

}
