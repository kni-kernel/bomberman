#include "Game.h"

Game::Game(int argc, char **argv)
        :_argc(argc), _argv(argv)
{
    QApplication app(_argc, _argv);         //must be constructed before QWidget (mainWindow) is created

    mainWindow = new Window;
    mainWindow->show();

    gameLoop();
}

void Game::gameLoop()
{
    while(mainWindow->windowOpened)
    {
        //things to do

        QCoreApplication::processEvents();
    }
}