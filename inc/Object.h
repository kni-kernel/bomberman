#pragma once

#include <iostream>
#include <utility>
#include <QtWidgets/QGraphicsPixmapItem>

namespace Bomberman {
    class Game;
    class Object : public QGraphicsPixmapItem {
    public:
        Object(const std::pair<double, double> &, const std::string &);

        virtual ~Object() = default;

        virtual void draw() = 0;

        virtual void update() = 0;

    protected:
        std::pair<double, double> _position;
        std::string _asset;
        Game *m_Game;
    };
}