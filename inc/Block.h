#pragma once

#include"Object.h"
#include <iostream>
#include <utility>   

namespace Bomberman {
    class Block : public Object {
    public:
        Block(std::pair<double, double>, std::string);

        //~Block() = default;
        virtual void draw() = 0;

        virtual void update() = 0;

    };
}