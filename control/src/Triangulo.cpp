#include "Triangulo.h"

Triangulo::Triangulo(int xh,int yh) :Polygon(xh,yh){}

int Triangulo::area(void){
    float resp=(ancho*alto)/val;
    return resp;
}
