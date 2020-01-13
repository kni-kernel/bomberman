#include "Object.h"

namespace Bomberman{
Object::Object(const std::pair<double, double> & position, const std::string  & asset) : _position(position), _asset(asset)
{}
}