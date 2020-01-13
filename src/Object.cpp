#include "Object.h"

namespace Bomberman{
Object::Object(const std::pair<double, double> & position, const std::string  & asset,Game *game,
               QGraphicsPixmapItem *parent) : m_position(position), m_asset(asset) ,m_Game(game),
    QGraphicsPixmapItem(parent)
{}
}