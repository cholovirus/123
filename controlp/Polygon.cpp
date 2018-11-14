#include "Polygon.h"

Polygon::Polygon(){
   alto=0;
   ancho=0;
}

void Polygon::print(){
    cout<<"alto: "<<alto<<" ancho: "<<ancho<<endl;
}

int Polygon::areapo(void){
    return alto,ancho;
}

void Polygon::printPo(void){
    cout <<this->area()<<'\n';
    }

