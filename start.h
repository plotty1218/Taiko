#ifndef START_H
#define START_H

#include <QMainWindow>
#include"mainwindow.h"
namespace Ui {
class Start;
}

class Start : public QMainWindow
{
    Q_OBJECT

public:
    explicit Start(QWidget *parent = 0);
    ~Start();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Start *ui;
    MainWindow *newgame;

};

#endif // START_H
