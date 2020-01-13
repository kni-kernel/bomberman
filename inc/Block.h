#pragma once

#include <iostream>
#include <utility>
#include"Object.h"

namespace Bomberman {
    class Block : public Object {
    public:
        Block(std::pair<double, double>, std::string, Game*, QGraphicsPixmapItem*);

        //~Block() = default;
        virtual void draw() = 0;

        virtual void update() = 0;

    };
}