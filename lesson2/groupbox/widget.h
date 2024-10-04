#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QRadioButton>
#include <QGroupBox>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QGroupBox *gb;
    QRadioButton *r1,*r2,*r3;

};

#endif // WIDGET_H
