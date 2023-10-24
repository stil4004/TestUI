#ifndef COMPUTERINFO_H
#define COMPUTERINFO_H

#include <QDialog>

namespace Ui {
class ComputerInfo;
}

class ComputerInfo : public QDialog
{
    Q_OBJECT

public:
    explicit ComputerInfo(QWidget *parent = nullptr);
    ~ComputerInfo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ComputerInfo *ui;
};

#endif // COMPUTERINFO_H
