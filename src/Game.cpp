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
    std::vector<Object*> elements;
    while(mainWindow->windowOpened)
    {
        for (int i = 0; i < elements.size(); i++)
        {
            elements[i]->update();
            elements[i]->draw();
        }

        QCoreApplication::processEvents();
    }
}