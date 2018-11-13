#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

template <class Tipo>
class Point
{
    public:
        Point(Tipo xh,Tipo yh):x(xh),y(yh){}
        void offset(Tipo,Tipo);
        void print();
        Point(void);
        Point(Point &o);

        /*double getX();
        double getY();
        void setX(double x);
        void setY(double y);*/
    private:
        Tipo x, y;
};

#endif // POINT_H
