#ifndef BOMBERMAN_GAME_H
#define BOMBERMAN_GAME_H

#include "Window.h"

class Game {
public:

    Game();
    ~Game();

    void gameLoop();            //main event loop

private:

    Window *mainWindow;

};


#endif //BOMBERMAN_GAME_H
