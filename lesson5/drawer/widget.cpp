#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    i = 0;
    startTimer(1000);
}

Widget::~Widget()
{

}
