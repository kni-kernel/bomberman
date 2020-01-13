#include "UnDestroyableBlock.h"

namespace Bomberman {
    UnDestroyableBlock::UnDestroyableBlock(std::pair<double, double> position ,
                                           std::string asset, Game* game, QGraphicsPixmapItem* parent) : Block(position, asset, game, parent) {}

    void UnDestroyableBlock::draw() {

    }

    void UnDestroyableBlock::update() {

    }
}