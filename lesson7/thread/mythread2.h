#ifndef MYTHREAD2_H
#define MYTHREAD2_H

#include <QThread>

class myThread2 : public QThread
{
    Q_OBJECT
signals:
    download(int);
public:
    myThread2();
    void run()
    {
        for(int i = 0; i < 100; i++)
        {
            emit download(i);
            QThread::sleep(2);
        }
    }
};

#endif // MYTHREAD2_H
