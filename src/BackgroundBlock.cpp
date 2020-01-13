#include <QGraphicsRectItem>
#include "BackgroundBlock.h"
#include "Game.h"

namespace Bomberman {
    BackgroundBlock::BackgroundBlock(std::pair<double, double> position, std::string asset, Game* game, QGraphicsPixmapItem*parent=nullptr) : Block(position, asset, game, parent) {
    }

    void BackgroundBlock::draw() {
        //setPixmap() picture
        m_Game->getScene()->addItem(this);
        setVisible(true);
    }
    void BackgroundBlock::update(){
        draw();
    }
}

