#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QColorDialog>
#include <QErrorMessage>
#include <QFileDialog>
#include <QFontDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QProgressDialog>
#include <QWizard>

#include <QPushButton>
#include <QTextEdit>
#include <QDebug>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
public slots:
    void setcolorfunc()
    {
        QColor c = QColorDialog::getColor();
        TextEdit_dialog->setTextColor(c);
    }

    void showerrmsg()
    {
        QErrorMessage *msg = QErrorMessage::qtHandler();
        msg->showMessage("error!");
    }

    void getfile()
    {
        QString filename = QFileDialog::getOpenFileName();
        TextEdit_dialog->setText(filename);
    }

    void setfont()
    {
        bool ok;
        QFont myfont = QFontDialog::getFont(&ok);
        if(ok){
            TextEdit_dialog->setFont(myfont);
        }
    }

    void getstr()
    {
        QString str = QInputDialog::getText(this, "xxxx","yyyy");
        TextEdit_dialog->setText(str);
    }

    void showmsg()
    {
        QMessageBox::information(this, "title", "hello world","AAA");
    }

    void showprogress()
    {
        QProgressDialog p;
        p.setValue(50);
        p.exec();
    }

private:
    QPushButton *Pushbutton_color;
    QPushButton *Pushbutton_errm;
    QPushButton *Pushbutton_file;
    QPushButton *Pushbutton_font;
    QPushButton *Pushbutton_input;
    QPushButton *Pushbutton_msg;
    QPushButton *Pushbutton_prg;

    QTextEdit *TextEdit_dialog;
};

#endif // WIDGET_H
