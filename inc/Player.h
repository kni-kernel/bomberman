#pragma once
#include <QtWidgets/QGraphicsPixmapItem>
#include <QtWidgets/QGraphicsItem>
#include <QKeyEvent>
#include "Object.h"
#include <utility>
#include <vector>
#include <iostream>

namespace Bomberman {
    class Player : public Object, public QGraphicsPixmapItem {
    public:
        //Player(QGraphicsItem* parent, std::pair<double,double>position, std::string asset, int maxVelocity , int lifes, int availableBombs);
        Player(
                QGraphicsItem *parent,
                std::pair<double, double> position,
                std::string asset,
                std::string color,
                int maxVelocity,
                int lifes,
                int availableBombs
        );

        void draw();

        void update(double);

        void keyPressedEvent(QKeyEvent *event);

    private:
        int _lifes;
        int _availableBombs;
        std::string _color;
        std::vector<double> _velocity;
        double _maxVelocity;
    };
}
