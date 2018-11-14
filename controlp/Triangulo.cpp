#include "Triangulo.h"

Triangulo::Triangulo(int xh,int yh) :Polygon(xh,yh){}


int Triangulo::area(){
    int resp=alto*ancho;
    return resp;
}
