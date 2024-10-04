#include "widget.h"
#include <QDialog>
#include "myDialog.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
#if 0
    myDialog a;
    a.setFixedSize(200,200);
    a.exec();

    if(!a.return_stat)
    {
        //return_stat == false
        exit(0);
    }
#endif
    int s = myDialog::getstat();
    if(!s)
    {
        //return_stat == false
        exit(0);
    }
}

Widget::~Widget()
{

}
