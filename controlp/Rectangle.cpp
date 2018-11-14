#include "Rectangle.h"

Rectangle::Rectangle(int xh,int yh) :Polygon(xh,yh){}


int Rectangle::area(){
    int resp=alto*ancho;
    return resp;
}
