#include "widget.h"

#include <QVBoxLayout>
#include <QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    lb = new QLabel;
    lb->setMinimumSize(640,480);
    lb->setScaledContents(true);
    lb->setFocus();
    lb->installEventFilter(this);

    lbt = new QPushButton("<");
    rbt = new QPushButton(">");
    openbt = new QPushButton("open");

    QHBoxLayout *hbox = new QHBoxLayout;
    hbox->addStretch();
    hbox->addWidget(lbt);
    hbox->addWidget(openbt);
    hbox->addWidget(rbt);
    hbox->addStretch();

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(lb);
    vbox->addLayout(hbox);
    this->setLayout(vbox);


    connect(openbt, SIGNAL(clicked(bool)), this, SLOT(openfiles()));
    connect(lbt,SIGNAL(clicked(bool)), this, SLOT(showl()));
    connect(rbt,SIGNAL(clicked(bool)), this, SLOT(showr()));
}

Widget::~Widget()
{

}
