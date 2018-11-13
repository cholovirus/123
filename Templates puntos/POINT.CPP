#include "Point.h"

//constructor variables
template <class Tipo>
void Point<Tipo>::offset(Tipo nx,Tipo ny){
    x+=nx;
    y+=ny;
}

//constructor sin variables
template <typename Tipo>
Point<Tipo>::Point(void){
    x=0;
    y=0;
}
//constructor vacio
template <typename Tipo>
void Point<Tipo>::print(){
    cout<< "("<<x <<","<<y<<")"<<endl;
}
//constructor copia
template <typename Tipo>
Point<Tipo>::Point(Point &o)
{
    x=o.y;
    y=o.x;
}

*/
