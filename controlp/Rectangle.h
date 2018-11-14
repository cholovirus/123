#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Polygon.h"



class Rectangle: public Polygon
{
    public:
        Rectangle(int,int);
        int area(void);
};

#endif // RECTANGLE_H
