#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QFileDialog>
#include <QProcess>
#include <QStringList>

class Widget : public QWidget
{
    Q_OBJECT
public slots:
    void showfile()
    {
        QString filename = QFileDialog::getOpenFileName();
        le->setText(filename);

        QStringList arg = {filename};
        QProcess ppp;
        ppp.execute("notepad",arg);
    }

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    QLineEdit *le;
    QPushButton *pb;
};

#endif // WIDGET_H
