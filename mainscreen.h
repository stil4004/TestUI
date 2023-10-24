#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QWidget>

namespace Ui {
class MainScreen;
}

struct Data{
    QString computer_id;
    QString version;
    QString date;
    QString description;
    QString cache;

};

class MainScreen : public QWidget
{
    Q_OBJECT

public:
    explicit MainScreen(QWidget *parent = nullptr);
    ~MainScreen();
    void setPanel(Data &dat);

private slots:
    void on_details_button_clicked();

private:
    Ui::MainScreen *ui;
};

#endif // MAINSCREEN_H
