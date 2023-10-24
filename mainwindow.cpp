#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QPixmap pix(":/panel/res/lPanel.jpg");
    //int w = ui->Panel->width();
   //int h = ui->Panel->height();
    //ui->Panel->setPixmap(pix.scaled(w, h * 10, Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}

