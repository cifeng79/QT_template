#include "widget.h"

#include <QHBoxLayout>
#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //new
    Pushbutton_color = new QPushButton("setcolor");
    Pushbutton_errm = new QPushButton("seterrm");
    Pushbutton_file = new QPushButton("setfile");
    Pushbutton_font = new QPushButton("setfont");
    Pushbutton_input = new QPushButton("getstr");
    Pushbutton_msg = new QPushButton("msg");
    Pushbutton_prg = new QPushButton("progress");

    TextEdit_dialog = new QTextEdit;

    //设置布局管理器
    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(Pushbutton_color);
    vbox->addWidget(Pushbutton_errm);
    vbox->addWidget(Pushbutton_file);
    vbox->addWidget(Pushbutton_font);
    vbox->addWidget(Pushbutton_input);
    vbox->addWidget(Pushbutton_msg);
    vbox->addWidget(Pushbutton_prg);

    QHBoxLayout *mainbox = new QHBoxLayout;
    mainbox->addLayout(vbox);
    mainbox->addWidget(TextEdit_dialog);
    this->setLayout(mainbox);

    //信号与槽实现
    /* 设置颜色 */
    connect(Pushbutton_color, SIGNAL(clicked(bool)), this, SLOT(setcolorfunc()));
    /* 打印错误信息 */
    connect(Pushbutton_errm, SIGNAL(clicked(bool)), this, SLOT(showerrmsg()));
    /* 设置文件名 */
    connect(Pushbutton_file, SIGNAL(clicked(bool)), this , SLOT(getfile()));
    /* 设置字体 */
    connect(Pushbutton_font, SIGNAL(clicked(bool)), this, SLOT(setfont()));
    /* 获取输入 */
    connect(Pushbutton_input, SIGNAL(clicked(bool)), this, SLOT(getstr()));
    /* 显示消息 */
    connect(Pushbutton_msg, SIGNAL(clicked(bool)), this , SLOT(showmsg()));
    /* 显示进度条 */
    connect(Pushbutton_prg, SIGNAL(clicked(bool)), this , SLOT(showprogress()));
}

Widget::~Widget()
{

}
