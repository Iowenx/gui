#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QToolBar>
#include <QAction>

#include "workwidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    WorkWidget workWidget;

    QMenu *fileMenu;

    QToolBar *editToolBar;

    QAction *newAction;
    QAction *openAction;
    QAction *editAction;
    QAction *buildAction;
    QAction *viewAction;
    QAction *printAction;
    QAction *exitAction;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void createActions();
    void createMenus();
    void createToolBars();
};

#endif // MAINWINDOW_H
