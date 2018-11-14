#include "Point.h"

//constructor variables
template <typename T>
Point<T>::Point(T xh,T yh)
{
    x=xh;
    y=yh;
}
//constructor sin variables
template <typename T>
Point<T>::Point(){
    x=0;
    y=0;
}
//constructor vacio
template <typename T>
void Point<T>::print(){
    cout<< "("<<x <<","<<y<<")"<<endl;
}
//constructor copia
template <typename T>
Point<T>::Point(Point &o)
{
    x=o.y;
    y=o.x;
}
template <typename T>
void Point<T>::offset(T nx,T ny){
    x+=nx;
    y+=ny;
}
template class Point<int>;
template class Point<double>;
template class Point<float>;
