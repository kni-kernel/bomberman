#include "Block.h"
#include "Object.h"

Block::Block(std::pair<double,double> position = std::pair<double, double>(0,0), std::string asset = "Block") : Object(position, asset)
{}