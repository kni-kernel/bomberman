#include "Game.h"

int main (int argc, char *argv[])
{
    QApplication app(argc, argv);         //must be constructed before QWidget (mainWindow) is created
    Game game;
    game.gameLoop();
}