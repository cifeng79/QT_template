#include "widget.h"

#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    le = new QLineEdit;
    le->setEchoMode(QLineEdit::Password);//初始为回显模式
    ck = new QCheckBox("show pass");
    pb = new QPushButton("clear");

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(le);
    vbox->addWidget(ck);
    vbox->addWidget(pb);
    this->setLayout(vbox);

    connect(pb, SIGNAL(clicked(bool)),le,SLOT(clear()));
    connect(ck, SIGNAL(clicked(bool)), this, SLOT(setpass(bool)));


}

Widget::~Widget()
{

}
