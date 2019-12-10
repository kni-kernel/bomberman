#include "Object.h"

Object :: Object(std::vector<double> position= std::vector<double>(2,0), std::string asset="Default_asset")
{
    _position = position;
    _asset = asset;
}