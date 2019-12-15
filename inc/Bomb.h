#ifndef BOMBERMAN_BOMB_H
#define BOMBERMAN_BOMB_H

#include <QtGui/QPixmap>
#include <QtWidgets/QGraphicsPixmapItem>
#include <QtWidgets/QGraphicsItem>
#include "Object.h"
#include "Window.h"


class Bomb: public Object, public QGraphicsPixmapItem{
public:
    Bomb(QGraphicsItem*, std::vector<double>,std::string,int,int);
    void draw();
    void update();
private:
    int _timeToBlow;
    int _blowRange;
    QPixmap *_asset;
    //Player *_bombOwner;
};
#endif //BOMBERMAN_BOMB_H
