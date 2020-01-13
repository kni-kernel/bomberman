#pragma once

#include <iostream>
#include <utility>
#include"Block.h"

namespace Bomberman {
    class DestroyableBlock : public Block {
    public:
        DestroyableBlock(std::pair<double, double>, std::string, Game*, QGraphicsPixmapItem*);

        //~DestroyableBlock() = default;
        virtual void draw() = 0;

        virtual void update() = 0;

    protected:

        bool _destroyable = true;
        bool _visible = true;
    };
}