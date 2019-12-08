#include "Game.h"

Game::Game()
{
    mainWindow = new Window;
    mainWindow->show();
}

Game::~Game() {
    delete mainWindow;
}

void Game::gameLoop()
{
    while(mainWindow->windowOpened)
    {
        //things to do

        QCoreApplication::processEvents();
    }
}