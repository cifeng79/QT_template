#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QFileDialog>
#include <QStringList>
#include <QEvent>
#include <QKeyEvent>

class Widget : public QWidget
{
    Q_OBJECT

public slots:
    void openfiles()
    {
        files = QFileDialog::getOpenFileNames();
        index = 0;

        QPixmap pix(files[index]);
        lb->setPixmap(pix);
    }

    void showr()
    {
        if(index+1 < files.length())
        {
            index++;
        }
        else
        {
            index = 0;
        }
        QPixmap pix(files[index]);
        lb->setPixmap(pix);
    }

    void showl()
    {
        if(index-1 >= 0)
        {
            index--;
        }
        else
        {
            index = files.length()-1;
        }
        QPixmap pix(files[index]);
        lb->setPixmap(pix);
    }

    bool eventFilter(QObject *watched, QEvent *event)
    {
        lb->setFocus();
        if(watched == lb)
        {
            if(event->type() == QEvent::KeyPress)
            {
                QKeyEvent *keyevent = static_cast<QKeyEvent *>(event);
                if(keyevent->key() == Qt::Key_Left)
                    showl();
                else if(keyevent->key() == Qt::Key_Right)
                    showr();
                return true;
            }
        }
        return QWidget::eventFilter(watched, event);
    }

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    QLabel *lb;
    QPushButton *lbt,*rbt, *openbt;
    QStringList files;
    int index;
};

#endif // WIDGET_H
