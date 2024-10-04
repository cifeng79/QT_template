#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>

class Widget : public QWidget
{
    Q_OBJECT

public slots:
    void movestr()
    {
        QString tem = pline->text();
        pline->clear();
        pline1->setText(tem);
    }

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QPushButton *pb;//方便内存回收
    QLineEdit *pline;
    QLineEdit *pline1;
};

#endif // WIDGET_H
