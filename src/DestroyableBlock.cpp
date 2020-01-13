#include "DestroyableBlock.h"

namespace Bomberman {
    DestroyableBlock::DestroyableBlock(std::pair<double, double> position,
                                       std::string asset, Game* game, QGraphicsPixmapItem* parent=nullptr) : Block(position, asset, game, parent) {}
}
