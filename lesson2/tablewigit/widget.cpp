#include "widget.h"
#include <QVBoxLayout>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    tw = new QTabWidget;

    te1 = new QTextEdit("1111");
    te2 = new QTextEdit("2222");
    te3 = new QTextEdit("3333");

    tw->addTab(te1,"1.c");
    tw->addTab(te2,"2.c");
    tw->addTab(te3, "3.c");


    // 创建一个垂直布局对象
    QVBoxLayout *vbox = new QVBoxLayout;
    // 将工具箱添加到垂直布局中
    vbox->addWidget(tw);
    // 设置当前窗口的布局为垂直布局
    this->setLayout(vbox);

}

Widget::~Widget()
{

}
