#ifndef BLOCK_H
#define BLOCK_H

#include"Object.h"
#include <iostream>
#include <utility>   

class Block : public Object
{
public:
	Block(std::pair<double,double>, std::string);
	//~Block() = default;
	virtual void draw() = 0;
	virtual void update() = 0;
protected:
	std::pair<double, double> _position;
	std::string _asset;
};

#endif //BLOCK_H