#include "computerinfo.h"
#include "ui_computerinfo.h"

ComputerInfo::ComputerInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComputerInfo)
{
    ui->setupUi(this);
}

ComputerInfo::~ComputerInfo()
{
    delete ui;
}

void ComputerInfo::on_pushButton_clicked()
{
    this->hide();
}

