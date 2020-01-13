#include "UnDestroyableBlock.h"

namespace Bomberman {
    UnDestroyableBlock::UnDestroyableBlock(std::pair<double, double> position = std::pair<double, double>(1, 0),
                                           std::string asset = "Blue") : Block(position, asset) {}

    void UnDestroyableBlock::draw() {

    }

    void UnDestroyableBlock::update() {

    }
}