#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"

#include <iostream>
using namespace std;

template <typename T2>
class PointArray
{
    public:
        PointArray();
        PointArray(const Point<T2> pts[],const int size);
        PointArray(PointArray &o);
         ~PointArray();

         void print();
         int getSize();
         void clear();
         void push_back(const Point<T2> &p);
         void insertar(const Point<T2> &p,int val);
         void swaps(const int val);
         void remover(const int val);

    private:
        int size;
        Point<T2> *points;
        void resize(int);
};

#endif // POINTARRAY_H
