#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Polygon.h"

class Rectangulo: public Polygon
{
    public:
        Rectangulo(int,int);

        int area(void);

};

#endif // RECTANGULO_H
