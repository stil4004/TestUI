#include "mainscreen.h"
#include "computerinfo.h"
#include "ui_mainscreen.h"


MainScreen::MainScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainScreen)
{
    ui->setupUi(this);
}

MainScreen::~MainScreen()
{
    delete ui;
}

void MainScreen::setPanel(Data &dat)
{
    ui->version_info->setText(dat.version);
    ui->dat_info->setText(dat.date);
    ui->about_info->setText(dat.description);
    ui->hash_info->setText(dat.cache);
}

void MainScreen::on_details_button_clicked()
{
    ComputerInfo window;
    window.setModal(true);
    window.setWindowFlags(Qt::FramelessWindowHint);
    window.exec();
}


