#include "Rectangulo.h"

Rectangulo::Rectangulo(int xh,int yh) :Polygon(xh,yh){}

int Rectangulo::area(){
    int resp=alto*ancho;
    return resp;
}

