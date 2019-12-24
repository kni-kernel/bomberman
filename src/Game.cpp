#include "Game.h"
#include "Window.h"

namespace Bomberman {

    Game::Game() :
        m_MainWindow{new Window(640, 480, "Bomberman Game")}
    {
        if(m_MainWindow)
            m_MainWindow->show();
        else {
            qInfo() << "Cannot open the main window, exiting.";
            exit(EXIT_FAILURE);
        }
    }

    Game::~Game() {
        delete m_MainWindow;
    }

    void Game::gameLoop() {
        while (m_MainWindow->isWindowOpened()) {
            QCoreApplication::processEvents();
        }
    }

}