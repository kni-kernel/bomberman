#include "Block.h"
#include "Object.h"

namespace Bomberman {
    Block::Block(std::pair<double, double> position, std::string asset, Game *game, QGraphicsPixmapItem *parent=nullptr)
            : Object(position, asset, game, parent)
            {
                setOffset(0,0);
                setX(std::get<0>(m_position));
                setY(std::get<1>(m_position));
                setVisible(false);
            }
}