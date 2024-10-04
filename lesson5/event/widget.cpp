#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    startTimer(1000);//1s
}

Widget::~Widget()
{

}
