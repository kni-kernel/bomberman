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
	virtual void draw();
	virtual void update();
protected:

	bool _destroyable = false;
	bool _visible = true;
};

#endif //UNDESTROYABLEBLOCK_H