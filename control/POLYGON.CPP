#include "Polygon.h"

Polygon::Polygon(int xh, int yh)
{
    alto=xh;
    ancho=yh;
}
Polygon::Polygon(){
    alto=0;
    ancho=0;

}
Polygon::Polygon(Polygon &o)
{
    alto=o.alto;
    ancho=o.ancho;
}

int Polygon::area(void){}

void Polygon::printPo(){
    cout <<this->area()<<'\n';
    }



