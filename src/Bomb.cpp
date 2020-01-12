#include "Bomb.h"

namespace Bomberman {

    Bomb::Bomb(const std::pair<int, int> & position, const std::string  & asset,int timeToBlow, int blowRange,Game *game, QGraphicsPixmapItem *parent=nullptr) :
            Object(position, asset, game, parent),
            m_timeToBlow(timeToBlow),
            m_blowRange(blowRange){

        setPixmap(QPixmap("/home/pawel/Projekt/bomberman/img/bomb.png"));
        setOffset(0,0);
        setX(std::get<0>(m_position));
        setY(std::get<1>(m_position));
        setVisible(false);
    }
    Bomb::~Bomb() = default;

    void Bomb::draw() {
        if(m_timeToBlow>0 && !isVisible()) {
            m_Game->getScene()->addItem(this);
            setVisible(true);
        }

    }

    void Bomb::update() {
        if(m_timeToBlow>0 && isVisible()){
            m_timeToBlow--;
        }
        else if (isVisible()){
            m_Game->getScene()->removeItem(this);
            setVisible(false);
        }
    }

    int Bomb::getTimeToBlow() {
        return m_timeToBlow;
    }

    int Bomb::getBlowRange() {
        return m_blowRange;
    }


}