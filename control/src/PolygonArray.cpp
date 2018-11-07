#include "PolygonArray.h"

PolygonArray::PolygonArray()
{
    this->size =0;
    this->polygons= new Polygon[size];
}

PolygonArray::PolygonArray(const Polygon pts[],const int size){
    this->size= size;
    this->polygons= new Polygon[size];
    for(int i=0;i<size;i++){
        polygons[i]=pts[i];
    }
}

PolygonArray::PolygonArray(PolygonArray &o){
    polygons=new Polygon [o.size];
    size=o.size;
    for(int i=0;i<size;++i){
        polygons[i]=o.polygons[i];
    }
}
void PolygonArray::resize(int newsize){
    Polygon *pts = new Polygon[newsize];
    int minsize = (newsize >size) ?size:newsize;
    for(int i=0;i<minsize; i++)
        pts[i]=polygons[i];
    delete[] polygons;
    size=newsize;
    polygons=pts;}


void PolygonArray::print(){
    for(int i=0;i<size;i++){
        polygons[i].printPo();
    }
}

void PolygonArray::push_back(const Polygon &p){
    resize(size+1);
    polygons[size-1]=p;
}

void PolygonArray::insertar(const Polygon &q,int val){
    resize(size+1);
    //int valor=0+val;
    for(int i=(size-1);i<val;i--){
        polygons[i]=polygons[i-1];}
    polygons[val]=q;
}

void PolygonArray::swaps(const int val){
    Polygon temp=polygons[val];
    polygons[val]=polygons[size-1];
    polygons[size-1]=temp;
}
void PolygonArray::remover(const int val){
    swaps(val);
    resize(size-1);
}

PolygonArray::~PolygonArray()
{
    delete[] polygons;
}
