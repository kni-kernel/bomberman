#ifndef BACKGROUNDBLOCK_H
#define BACKGROUNDBLOCK_H

#include"Block.h"
#include <iostream>
#include <utility> 

class BackgroundBlock : public Block
{
public:
	BackgroundBlock(std::pair<double, double>, std::string);
	//~BackgroundBlock() = default; 
	virtual void draw() = 0;
	virtual void update() = 0;

protected:

	bool _destroyable = false;
	bool _visible = true;
};

#endif //BACKGROUND_H