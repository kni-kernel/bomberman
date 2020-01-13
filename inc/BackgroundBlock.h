#pragma once

#include <iostream>
#include <utility>
#include"Block.h"

namespace Bomberman {
    class BackgroundBlock : public Block {
    public:
        BackgroundBlock(std::pair<double, double>, std::string, Game*, QGraphicsPixmapItem*);

        //~BackgroundBlock() = default;
        virtual void draw();

        virtual void update() = 0;

    protected:

        bool _destroyable = false;
        bool _visible = true;
    };
}