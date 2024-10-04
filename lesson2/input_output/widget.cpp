#include "widget.h"
#include <QVBoxLayout>
#include <QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //input
    le = new QLineEdit(this);
    te = new QTextEdit;
    cb = new QComboBox;
    cb->addItem("read");
    cb->addItem("write");
    timee = new QTimeEdit;
    dl = new QDial;
    sd = new QSlider;
    sd->setOrientation(Qt::Horizontal);
    sb = new QScrollBar;
    sb->setOrientation(Qt::Horizontal);

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(le);
    vbox->addWidget(te);
    vbox->addWidget(cb);
    vbox->addWidget(timee);
    vbox->addWidget(dl);
    vbox->addWidget(sd);
    vbox->addWidget(sb);


    //output
    lb = new QLabel("hello");
    lb1 =new QLabel;
    QPixmap pix("image.png");
    lb1->setFixedSize(200,200);
    lb1->setScaledContents(true);
    lb1->setPixmap(pix);

    lcd = new QLCDNumber;
    pgb = new QProgressBar;
    QVBoxLayout *vbox1= new QVBoxLayout;
    vbox1->addWidget(lb);
    vbox1->addWidget(lb1);
    vbox1->addWidget(lcd);
    vbox1->addWidget(pgb);

    QHBoxLayout *hbox = new QHBoxLayout;
    hbox->addLayout(vbox);
    hbox->addLayout(vbox1);
    this->setLayout(hbox);

    connect(dl, SIGNAL(valueChanged(int)),lcd,SLOT(display(int)));
    connect(dl,SIGNAL(valueChanged(int)),pgb,SLOT(setValue(int)));
    connect(sd, SIGNAL(valueChanged(int)), lcd, SLOT(display(int)));
    connect(sd, SIGNAL(valueChanged(int)), pgb, SLOT(setValue(int)));

}

Widget::~Widget()
{

}
