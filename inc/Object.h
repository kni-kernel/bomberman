#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
#include <utility>   

class Object
{
public:
	Object(std::pair<double, double>, std::string);
	virtual void draw() = 0;
	virtual void update() = 0;
protected:
	std::pair<double, double> _position;
	std::string _asset;
};

#endif //OBJECT_H