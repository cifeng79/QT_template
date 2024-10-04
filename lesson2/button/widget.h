#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QCheckBox>

class Widget : public QWidget
{
    Q_OBJECT
public slots:
    void setpass(bool flag)
    {
        if(!flag){

            le->setEchoMode(QLineEdit::Password);//回显模式
        }
        else {
            le->setEchoMode(QLineEdit::Normal);//正常模式
        }
    }

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    QLineEdit *le;
    QCheckBox *ck;
    QPushButton *pb;

};

#endif // WIDGET_H
