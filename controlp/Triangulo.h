#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "Polygon.h"

class Triangulo: public Polygon
{
    public:
        Triangulo(int,int);
        int area(void);
    protected:
        int val=2;
};

#endif // TRIANGULO_H
