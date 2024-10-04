#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>

class myDialog : public QDialog
{
    Q_OBJECT

public:
    myDialog();

    static int getstat()
    {
        myDialog a;
        a.exec();

        return a.return_stat;
    }


public slots:
    void ok_pushed()
    {
        return_stat = true;
        close();
    }

private:
    QLineEdit *le;
    QPushButton *pb;

    int return_stat;//返回标志，1表示点击ok返回
};

#endif // MYDIALOG_H
