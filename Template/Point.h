#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

template <typename T>
class Point
{
    public:
        Point();
        Point(T,T);
        Point(Point &o);

        void offset(T,T);
        void print();
        double getX();
        double getY();
        void setX(T x);
        void setY(T y);

    private:
        T x, y;
};

#endif // POINT_H
