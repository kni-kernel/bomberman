#include "DestroyableBlock.h"

namespace Bomberman {
    DestroyableBlock::DestroyableBlock(std::pair<double, double> position = std::pair<double, double>(1, 0),
                                       std::string asset = "Blue") : Block(position, asset) {}
}
