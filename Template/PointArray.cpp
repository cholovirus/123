#include "Point.h"
#include "PointArray.h"

template <typename T2>
PointArray<T2>::PointArray()
{
    this->size =0;
    this->points= new Point<T2>[size];
}

template <typename T2>
PointArray<T2>::PointArray(const Point<T2> pts[],const int size){
    this->size= size;
    this->points= new Point<T2>[size];
    for(int i=0;i<size;i++){
        points[i]=pts[i];
    }
}

template <typename T2>
PointArray<T2>::PointArray(PointArray &o){
    points=new Point<T2> [o.size];
    size=o.size;
    for(int i=0;i<size;++i){
        points[i]=o.points[i];
    }
}

template <typename T2>
void PointArray<T2>::resize(int newsize){
    Point<T2> *pts = new Point<T2>[newsize];
    int minsize = (newsize >size) ?size:newsize;
    for(int i=0;i<minsize; i++)
        pts[i]=points[i];
    delete[] points;
    size=newsize;
    points=pts;}

template <typename T2>
void PointArray<T2>::clear(){
    resize(0);
}

template <typename T2>
int PointArray<T2>::getSize(){
    return size;
}

template <typename T2>
void PointArray<T2>::print(){
    for(int i=0;i<size;i++){
        points[i].print();
    }
}

template <typename T2>
void PointArray<T2>::push_back(const Point<T2> &p){
    resize(size+1);
    points[size-1]=p;
}

template <typename T2>
void PointArray<T2>::insertar(const Point<T2> &q,int val){
    resize(size+1);
    //int valor=0+val;
    for(int i=(size-1);i<val;i--){
        points[i]=points[i-1];}
    points[val]=q;
}

template <typename T2>
void PointArray<T2>::swaps(const int val){
    Point<T2> temp=points[val];
    points[val]=points[size-1];
    points[size-1]=temp;
}

template <typename T2>
void PointArray<T2>::remover(const int val){
    swaps(val);
    resize(size-1);
}

template <typename T2>
PointArray<T2>::~PointArray(){
    delete[] points;
}

template class PointArray<int>;
