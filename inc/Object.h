#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
#include <vector>

class Object
{
public:
    Object(std::vector<double>, std::string);
    virtual void draw() = 0;
    virtual void update() = 0;
protected:
    std::vector <double> _position;
    std::string _asset;
};

#endif //OBJECT_H