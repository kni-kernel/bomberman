#ifndef UNDESTROYABLEBLOCK_H
#define UNDESTROYABLEBLOCK_H

#include"Block.h"
#include <iostream>
#include <utility> 

class UnDestroyableBlock : public Block
{
public:
	UnDestroyableBlock(std::pair<double, double>, std::string);
	//~UnDestroyableBlock() = default;
	virtual void draw() = 0;
	virtual void update() = 0;
protected:
	std::pair<double, double> _position;
	std::string _asset;
	bool _destroyable = false;
	bool _visible = true;
};

#endif //UNDESTROYABLEBLOCK_H