#include "widget.h"

#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    te = new QTextEdit;
    te->setMinimumSize(640,480);
    le = new QLineEdit;
    bt = new QPushButton("showtxt");

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(te);
    vbox->addWidget(le);
    vbox->addWidget(bt);
    this->setLayout(vbox);

    //connect
    connect(bt, SIGNAL(clicked(bool)), this, SLOT(showfile()));
}

Widget::~Widget()
{

}
