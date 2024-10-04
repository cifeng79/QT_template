#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStackedWidget>
#include <QTextEdit>
#include <QComboBox>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QStackedWidget *sw;
    QTextEdit *te1, *te2, *te3;
    QComboBox *cb;
};

#endif // WIDGET_H
