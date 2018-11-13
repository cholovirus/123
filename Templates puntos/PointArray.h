#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "POINT.H"

template <typename Tipo2>
class PointArray
{
    public:
        PointArray();
        PointArray(const Point<Tipo2> pts[],const Tipo2 size);
        PointArray(PointArray &o);
        ~PointArray();

         void print();
         int getSize();
         void clear();
         void push_back(const Point<Tipo2> &p);
         void insertar(const Point<Tipo2> &p,Tipo2 val);
         void swaps(const Tipo2 val);
         void remover(const Tipo2 val);


    private:
        Tipo2 size;
        Point<Tipo2> *points;
        void resize(int);

};


#endif // POINTARRAY_H
