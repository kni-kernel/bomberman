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
		for (Object* element : elements)
		{
			element->update();
			element->draw();
		}

        QCoreApplication::processEvents();
    }
}