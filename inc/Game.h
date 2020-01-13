#pragma once

#include "Window.h"
#include "Object.h"
#include "Block.h"
#include "UnDestroyableBlock.h"

namespace Bomberman {
    class Game {
    public:

        Game();

        ~Game();

        void gameLoop();            //main event loop

    private:

        Window *mainWindow;

    };
}
