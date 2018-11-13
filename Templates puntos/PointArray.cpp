#include "PointArray.h"
template <typename Tipo2>
PointArray<Tipo2>::PointArray()
{
    this->size =0;
    this->points= new Point<Tipo2>[size];
}

template <typename Tipo2>
PointArray<Tipo2>::PointArray(const Point<Tipo2> pts[],const Tipo2 size){
    this->size= size;
    this->points= new Point<Tipo2>[size];
    for(int i=0;i<size;i++){
        points[i]=pts[i];
    }
}

template <typename Tipo2>
PointArray<Tipo2>::PointArray(PointArray &o){
    points=new Point<Tipo2> [o.size];
    size=o.size;
    for(int i=0;i<size;++i){
        points[i]=o.points[i];
    }
}

template <typename Tipo2>
void PointArray<Tipo2>::resize(int newsize){
    Point<Tipo2> *pts = new Point<Tipo2>[newsize];
    int minsize = (newsize >size) ?size:newsize;
    for(int i=0;i<minsize; i++)
        pts[i]=points[i];
    delete[] points;
    size=newsize;
    points=pts;}

template <typename Tipo2>
void PointArray<Tipo2>::clear(){
    resize(0);
}

template <typename Tipo2>
int PointArray<Tipo2>::getSize(){
    return size;
}

template <typename Tipo2>
void PointArray<Tipo2>::print(){
    for(int i=0;i<size;i++){
        points[i].printPo();
    }
}

template <typename Tipo2>
void PointArray<Tipo2>::push_back(const Point<Tipo2> &p){
    resize(size+1);
    points[size-1]=p;
}

template <typename Tipo2>
void PointArray<Tipo2>::insertar(const Point<Tipo2> &q,Tipo2 val){
    resize(size+1);
    //int valor=0+val;
    for(int i=(size-1);i<val;i--){
        points[i]=points[i-1];}
    points[val]=q;
}

template <typename Tipo2>
void PointArray<Tipo2>::swaps(const Tipo2 val){
    Point<Tipo2> temp=points[val];
    points[val]=points[size-1];
    points[size-1]=temp;
}

template <typename Tipo2>
void PointArray<Tipo2>::remover(const Tipo2 val){
    swaps(val);
    resize(size-1);
}


template <typename Tipo2>
PointArray<Tipo2>::~PointArray()
{
    delete[] points;
}
