#include "mydialog.h"
#include <QVBoxLayout>

myDialog::myDialog()
{
    le = new QLineEdit("input");
    pb = new QPushButton("OK");
    //垂直布局
    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(le);
    vbox->addWidget(pb);
    setLayout(vbox);
   //设置标记默认值
    return_stat = false;
    //连接信号与槽函数
    connect(pb, SIGNAL(clicked(bool)),this, SLOT(ok_pushed()));
}
