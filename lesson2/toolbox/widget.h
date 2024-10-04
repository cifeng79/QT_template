#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QToolBox>
#include <QPushButton>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QToolBox *tb;
    QPushButton *pb[3];
};

#endif // WIDGET_H
