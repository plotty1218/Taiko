#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QLabel>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void movep1();
    void movep2();
    void movep3();
    void movep4();
    void movep5();
    void movep6();
    void movep7();
    void movep8();
    void newP();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void timer_timeout();


private:
    Ui::MainWindow *ui;
    int x1,x2,x3,x4,x5,x6,x7,x8,y;
    bool av1,av2,av3,av4,av5,av6,av7,av8;
    void keyPressEvent(QKeyEvent * event);
};

#endif // MAINWINDOW_H
