#include "widget.h"
#include <QVBoxLayout>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    lb1 = new QLabel;
    QPixmap pix("image.png");
    lb1->setPixmap(pix);

    scr = new QScrollArea;
    scr->setWidget(lb1);

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(scr);
    this->setLayout(vbox);

}

Widget::~Widget()
{

}
