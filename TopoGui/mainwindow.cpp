#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setCentralWidget(&workWidget);
    resize(QSize(800, 600));
    createActions();
    createMenus();
    createToolBars();
}

MainWindow::~MainWindow()
{

}

void MainWindow::createActions()
{
    newAction = new QAction(tr("&New"), this);
    newAction->setShortcut(QKeySequence::New);

    openAction = new QAction(tr("&Open"), this);
    openAction->setShortcut(QKeySequence::Open);

    editAction = new QAction(tr("&Edit"), this);
    editAction->setShortcut(QKeySequence::UnknownKey);

    buildAction = new QAction(tr("&(Re)Build"), this);
    buildAction->setShortcut(QKeySequence::UnknownKey);

    viewAction = new QAction(tr("&View"), this);
    viewAction->setShortcut(QKeySequence::UnknownKey);

    printAction = new QAction(tr("&Print"), this);
    printAction->setShortcut(QKeySequence::Print);

    exitAction = new QAction(tr("&Exit"), this);
    exitAction->setShortcut(QKeySequence::UnknownKey);
    connect(exitAction, SIGNAL(triggered()), this, SLOT(close()));
}

void MainWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(newAction);
    fileMenu->addAction(openAction);
    fileMenu->addAction(editAction);
    fileMenu->addAction(buildAction);
    fileMenu->addAction(viewAction);
    fileMenu->addAction(printAction);
    fileMenu->addSeparator();
    fileMenu->addAction(exitAction);
}

void MainWindow::createToolBars()
{
    editToolBar = addToolBar(tr("&File"));
    editToolBar->addAction(openAction);
    editToolBar->addAction(editAction);
    editToolBar->addAction(buildAction);
    editToolBar->addAction(viewAction);
    editToolBar->addAction(printAction);
}
