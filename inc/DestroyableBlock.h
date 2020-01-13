#pragma once

#include"Block.h"
#include <iostream>
#include <utility> 

namespace Bomberman {
    class DestroyableBlock : public Block {
    public:
        DestroyableBlock(std::pair<double, double>, std::string);

        //~DestroyableBlock() = default;
        virtual void draw() = 0;

        virtual void update() = 0;

    protected:

        bool _destroyable = true;
        bool _visible = true;
    };
}