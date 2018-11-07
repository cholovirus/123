#ifndef CIRCULO_H
#define CIRCULO_H
#include "Polygon.h"


class Circulo: public Polygon
{
    public:
        Circulo(int,int,int);
        Circulo(int);

        int area(void);

    protected:
        int radio;
        float pi=3.14;

};

#endif // CIRCULO_H
