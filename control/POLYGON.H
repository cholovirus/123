#ifndef POLYGON_H
#define POLYGON_H
#include <iostream>
using namespace std;

class Polygon
{
    protected:
        int alto, ancho;
    public:
        //Constructor
        Polygon();
        Polygon(int,int);
        Polygon(Polygon &o);

        //Metodos
        int area(void);
        //virtual int area(void)=0;
        void printPo(void);

};

#endif // POLYGON_H
