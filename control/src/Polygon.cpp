#include "Polygon.h"

Polygon::Polygon(){}
Polygon::Polygon(int xh, int yh):alto(xh),ancho(yh){}

int Polygon::area(void){}

 void Polygon::printV(){
    cout <<"alto: "<<alto<<" ancho: "<<ancho<<endl;
 }
void Polygon::printPo(){
    cout <<this->area()<<'\n';
    }



