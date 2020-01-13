#pragma once

#include"Block.h"
#include <iostream>
#include <utility> 

namespace Bomberman {
    class BackgroundBlock : public Block {
    public:
        BackgroundBlock(std::pair<double, double>, std::string);

        //~BackgroundBlock() = default;
        virtual void draw();

        virtual void update() = 0;

    protected:

        bool _destroyable = false;
        bool _visible = true;
    };
}