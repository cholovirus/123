#ifndef POLYGONARRAY_H
#define POLYGONARRAY_H
#include "Polygon.h"
#include "Rectangulo.h"

class PolygonArray
{
    public:
        PolygonArray();
        PolygonArray(const Polygon pts[],const int size);
        PolygonArray(PolygonArray &o);
        ~PolygonArray();

         void print();
         void push_back(const Polygon &p);
         void insertar(const Polygon &p,int val);
         void swaps(const int val);
         void remover(const int val);


    private:
        int size;
        Polygon *polygons;
        void resize(int);

};

#endif // POLYGONARRAY_H
