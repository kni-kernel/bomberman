#include "Bomb.h"



Bomb::Bomb(QGraphicsItem *parent=nullptr, std::vector<double> position ={0.0,0.0},
        std::string asset = std::string("Default Bomb"),
        int timeToBlow=0,
        int blowRange=0):
        Object(position,asset),
        _timeToBlow(timeToBlow),
        _blowRange(blowRange),
        QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/img/bomb.png"));


}

void Bomb::draw() {

}

void Bomb::update() {

}
