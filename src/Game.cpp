#include "Game.h"
#include "Object.h"
#include "Block.h"
#include "UnDestroyableBlock.h"
#include <utility>

namespace Bomberman {
    Game::Game() {
        mainWindow = new Window;
        mainWindow->show();
    }

    Game::~Game() {
        delete mainWindow;
    }

    void Game::gameLoop() {
        std::vector<Object *> elements;
        /*
        UnDestroyableBlock* wall = new UnDestroyableBlock(std::pair <double, double> (1.0,0.0),"nazwa");
        elements.push_back(wall);
        */



        while (mainWindow->windowOpened) {
            for (Object *element : elements) {
                element->update();
                element->draw();
            }

            QCoreApplication::processEvents();
        }
    }

    QGraphicsScene* Game::getScene() {
        return m_Scene;
    }
}