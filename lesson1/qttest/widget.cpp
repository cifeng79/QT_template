#include "widget.h"
#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    pb = new QPushButton("OK",this);
    pline = new QLineEdit(this);
    pline1 = new QLineEdit(this);
    //pb->setGeometry(0,100,50,50);//设置物理方位

    //布局管理器
    QVBoxLayout *vbox = new QVBoxLayout;//vbox:垂直布局管理器
    vbox->addWidget(pline1);
    vbox->addWidget(pline);//布局的对象
    vbox->addWidget(pb);

    this->setLayout(vbox);//设置布局管理器

    //connect(pb, SIGNAL(clicked(bool)), pline, SLOT(clear()));//信号与槽机制
    connect(pb, SIGNAL(clicked(bool)), this, SLOT(movestr()));
}

Widget::~Widget()
{

}
