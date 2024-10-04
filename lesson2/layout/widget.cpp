#include "widget.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QFormLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    le = new QLineEdit(this);
    le1 = new QLineEdit(this);
    pb = new QPushButton("OK", this);

    /* 垂直布局类 */
#if 0
    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(le);
    vbox->addWidget(le1);
    vbox->addWidget(pb);
    this->setLayout(vbox);
#endif

    /* 水平布局 */
#if 0
    QHBoxLayout *hbox = new QHBoxLayout;
    hbox->addWidget(le);
    hbox->addWidget(le1);
    hbox->addWidget(pb);
    this->setLayout(hbox);
#endif
    /* 网状布局 */
#if 0
    QGridLayout *gbox = new QGridLayout;
    gbox->addWidget(le, 0, 0);
    gbox->addWidget(le1, 1, 1);
    gbox->addWidget(pb, 2, 2);
    this->setLayout(gbox);
#endif
    /* 表单布局 */
#if 1
    QFormLayout *fbox = new QFormLayout;
    fbox->addRow("user",le);
    fbox->addRow("passwd", le1);
    fbox->addRow("", pb);
    this->setLayout(fbox);
#endif


}

Widget::~Widget()
{

}
