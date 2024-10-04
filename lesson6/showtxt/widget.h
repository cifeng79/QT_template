#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QFileDialog>

#include <QFile>

class Widget : public QWidget
{
    Q_OBJECT
public slots:
    void showfile()
    {
        QString filename = QFileDialog::getOpenFileName();
        le->setText(filename);

        QFile file(filename);

        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
                  return;

        while (!file.atEnd())
        {
            QByteArray line = file.readLine();
            te->append(line);
        }

    }

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QTextEdit *te;
    QLineEdit *le;
    QPushButton *bt;
};

#endif // WIDGET_H
