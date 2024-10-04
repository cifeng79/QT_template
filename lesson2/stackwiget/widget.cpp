#include "widget.h"
#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    sw = new QStackedWidget;

    te1 = new QTextEdit("aaa");
    te2 = new QTextEdit("bbb");
    te3 = new QTextEdit("ccc");

    sw->addWidget(te1);
    sw->addWidget(te2);
    sw->addWidget(te3);

    cb = new QComboBox;
    cb->addItem("111");
    cb->addItem("222");
    cb->addItem("333");

    // 创建一个垂直布局对象
    QVBoxLayout *vbox = new QVBoxLayout;
    // 将标签页小部件添加到垂直布局中
    vbox->addWidget(sw);
    vbox->addWidget(cb);
    // 设置当前窗口的布局为垂直布局
    this->setLayout(vbox);

    connect(cb, SIGNAL(activated(int)), sw, SLOT(setCurrentIndex(int)));
}

Widget::~Widget()
{

}
