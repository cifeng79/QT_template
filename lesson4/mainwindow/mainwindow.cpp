#include "mainwindow.h"
#include <QMenu>
#include <QMenuBar>
#include <QToolBar>
#include <QStatusBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //create actions
    openfileact = new QAction(QIcon("open.png"),"open",this);
    openfileact->setShortcut(QKeySequence(tr("Ctrl+O")));
    copyfileact = new QAction(QIcon("copy.png"),"copy",this);
    pastefileact = new QAction(QIcon("past.png"),"paste",this);
    setcoloract = new QAction(QIcon("color.png"),"setcolor",this);

    //创建菜单
    QMenu *fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(openfileact);

    QMenu *editMenu = menuBar()->addMenu(tr("&Edit"));
    editMenu->addAction(copyfileact);
    editMenu->addAction(pastefileact);

    QMenu *setMenu = menuBar()->addMenu(tr("&Set"));
    setMenu->addAction(setcoloract);
    //创建工具栏
    QToolBar *toolbar_file = addToolBar("file");
    toolbar_file->addAction(openfileact);

    QToolBar *toolbar_edit = addToolBar("edit");
    toolbar_edit->addAction(copyfileact);
    toolbar_edit->addAction(pastefileact);

    QToolBar *toolbar_set = addToolBar("set");
    toolbar_set->addAction(setcoloract);


    //中央控件
     te = new QTextEdit("hello");
     te->setMinimumSize(640,480);
     setCentralWidget(te);

    //状态栏
     slb = new QLabel("1.txt");
     QStatusBar *stb = statusBar();
     stb->addWidget(slb);

     //绑定槽函数
     connect(openfileact, SIGNAL(triggered(bool)), this, SLOT(openf()));
     connect(copyfileact, SIGNAL(triggered(bool)), this, SLOT(copyf()));
     connect(pastefileact, SIGNAL(triggered(bool)), this, SLOT(pastef()));
     connect(setcoloract, SIGNAL(triggered(bool)), this, SLOT(setcolorf()));
}

MainWindow::~MainWindow()
{

}
