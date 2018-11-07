#include "Circulo.h"

Circulo::Circulo(int xh,int yh,int rh): Polygon(xh,yh)  {
    radio=rh;


}
/*Circulo::Circulo(int rh){
    radio=rh;

}*/

int Circulo::area(void){
    int resp=(pi*((radio*radio)));
    return resp;
}
