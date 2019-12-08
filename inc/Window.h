#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

class Window : public QMainWindow
{
//    Q_OBJECT      //i don't know if it should be used here

public:

    void setupUi();                             //setups ui main window
    void addTestLabel();                        //prints "Hello Qt world" in the middle of a window
    void closeEvent(QCloseEvent *) override;    //override for game loop to end when main window is closed

    explicit Window(QWidget *parent = nullptr);
    ~Window() override;

    bool windowOpened;

private:

    //objects for printing "Hello Qt world" in the middle of the window
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;

};

#endif // MAINWINDOW_H
