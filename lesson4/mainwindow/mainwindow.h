#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QAction>
#include <QTextEdit>
#include <QLabel>
#include <QFileDialog>
#include <QColorDialog>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public slots:
    void openf()
    {
        QString filename = QFileDialog::getOpenFileName();
        te->setText(filename);
    }

    void copyf()
    {
        te->copy();
    }

    void pastef()
    {
        te->paste();
    }

    void setcolorf()
    {
        QColor ccc = QColorDialog::getColor();
        te->setTextColor(ccc);
    }

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QAction *openfileact;//打开文件
    QAction *copyfileact;//复制
    QAction *pastefileact;//粘贴
    QAction *setcoloract;//设置颜色

    QTextEdit *te;

    //stat
    QLabel *slb;
};

#endif // MAINWINDOW_H
