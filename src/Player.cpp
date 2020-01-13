#include "Player.h"

namespace Bomberman {
    Player::Player(
            QGraphicsItem *parent = nullptr,
            std::pair<double, double> position = std::pair<double, double>(0.0, 0.0),
            std::string asset = std::string("Player"),
            std::string color = std::string("rgba(100,100,100, 0.1"),
            int maxVelocity = 0,
            int lifes = 0,
            int availableBombs = 1
    ) : Object(position, asset),
        _maxVelocity(maxVelocity),
        _lifes(lifes),
        _availableBombs(availableBombs),
        _color(color),
        _velocity({0.0, 0.0}) {

    }

    void Player::keyPressedEvent(QKeyEvent *event) {
        if (event->key() == Qt::Key_Left) {
            _velocity[0] *= -_maxVelocity;
        } else if (event->key() == Qt::Key_Right) {
            _velocity[0] *= _maxVelocity;
        } else if (event->key() == Qt::Key_Up) {
            _velocity[1] *= -_maxVelocity;
        } else if (event->key() == Qt::Key_Down) {
            _velocity[1] *= _maxVelocity;
        }
    }

    void Player::update(double dt) {
        _position.first += _velocity[0] * dt;
        _position.second += _velocity[1] * dt;
    }


    void Player::draw() {

    }
}