#include <QGraphicsRectItem>
#include "BackgroundBlock.h"

namespace Bomberman {
    BackgroundBlock::BackgroundBlock(std::pair<double, double> position, std::string asset) : Block(position, asset) {
    }

    void BackgroundBlock::draw() {
        QGraphicsRectItem *rect = new QGraphicsRectItem;
        rect->setRect(std::get<0>(_position), std::get<1>(_position), 10, 10);
        //addItem(rect);
    }
}
