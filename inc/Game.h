#pragma once

#include <QtWidgets/QGraphicsView>
#include "Object.h"

namespace Bomberman {

    class Window;

    class Game {

    public:

        Game();

        ~Game();

        void gameLoop();

        void addBomb();

        QGraphicsScene* getScene();

    private:

        Window *m_MainWindow;
        std::vector<Object*> m_Elements;
        QGraphicsScene *m_Scene;

    };

}