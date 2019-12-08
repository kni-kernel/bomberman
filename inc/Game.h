#ifndef BOMBERMAN_GAME_H
#define BOMBERMAN_GAME_H

#include "Window.h"

class Game {

public:

    Game(int , char **);

    void gameLoop();

private:

    int _argc;
    char **_argv;
    Window *mainWindow;

};


#endif //BOMBERMAN_GAME_H
