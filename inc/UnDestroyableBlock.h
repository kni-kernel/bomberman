#pragma once

#include"Block.h"
#include <iostream>
#include <utility> 

namespace Bomberman {
    class UnDestroyableBlock : public Block {
    public:
        UnDestroyableBlock(std::pair<double, double>, std::string, Game*, QGraphicsPixmapItem*);

        //~UnDestroyableBlock() = default;
        virtual void draw();

        virtual void update();

    protected:

        bool _destroyable = false;
        bool _visible = true;
    };
}