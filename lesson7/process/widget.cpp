#include "widget.h"
#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    le = new QLineEdit;
    pb = new QPushButton("open");

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(le);
    vbox->addWidget(pb);
    this->setLayout(vbox);

    connect(pb, SIGNAL(clicked(bool)), this, SLOT(showfile()));
}

Widget::~Widget()
{

}
