#pragma once
#include <QtGui/QPixmap>
#include <QtWidgets/QGraphicsItem>
#include <QtWidgets/QGraphicsPixmapItem>
#include "Object.h"
#include "Window.h"
#include "Game.h"

namespace Bomberman {
    class Bomb : public Object{
    public:
        Bomb(const std::pair<int, int> &, const std::string &, int, int, Game*, QGraphicsPixmapItem*);
        ~Bomb();
        void draw();
        void update();
        int getTimeToBlow();
        int getBlowRange();
    private:
        int m_timeToBlow;
        int m_blowRange;

        //Player *m_bombOwner;
    };


}