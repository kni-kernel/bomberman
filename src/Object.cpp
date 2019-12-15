#include "Object.h"

Object::Object(std::pair<double, double> position = std::pair<double, double> (2, 0), std::string asset = "Default_asset")
{
	_position = position;
	_asset = asset;
}