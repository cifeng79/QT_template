#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    pix = new QPixmap(this->width(),this->height());
    pix->fill();//填充空白
    saveit = false;
}

Widget::~Widget()
{

}
