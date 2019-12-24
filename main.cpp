#include <QtWidgets>

#include "Game.h"

int main (int argc, char *argv[]) {
    QApplication app(argc, argv);         //must be constructed before QWidget (m_MainWindow) is created
    auto game = new Bomberman::Game;
    game->gameLoop();
    delete game;
}