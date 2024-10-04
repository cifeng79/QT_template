#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QTextEdit>
#include <QComboBox>
#include <QTimeEdit>
#include <QDial>
#include <QSlider>
#include <QScrollBar>

#include <QLabel>
#include <QLCDNumber>
#include <QProgressBar>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    //input
    QLineEdit *le;
    QTextEdit *te;
    QComboBox *cb;
    QTimeEdit *timee;
    QDial *dl;
    QSlider *sd;
    QScrollBar *sb;
    //output
    QLabel *lb,*lb1;
    QLCDNumber *lcd;
    QProgressBar *pgb;
};

#endif // WIDGET_H
