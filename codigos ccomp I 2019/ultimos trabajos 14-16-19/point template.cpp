#include <iostream>

using namespace std;


template <typename T>
class Point {
    private:
        T x, y;
    public:
        Point(const T u, const T v) : x(u), y(v) {}
        T getX() { return x; }
        T getY() { return y; }
        Point<T> operator+(const Point<T> o) {
            Point<T> tmp(0, 0);
            tmp.x = x + o.x;
            tmp.y = y + o.y;
            return tmp;
        }


};

template <typename A>
ostream& operator<<(ostream& output,  Point<A>&o){
            output<<o.getX()<<","<<o.getY()<<endl;
            return output;
        }
template <typename T>
T sum(const T a, const T b) {
    return a + b;
}


int main()
{
    Point<float> p(4.3, 5.6);
    Point<float> q(3.3, 8.6);

    Point<float> res = p + q;

    cout << res << endl;
    //cout << res.getX() << ", " << res.getY() <<  endl;

//    Point<float> q(3.3, 8.6);
//    cout << p.getX() << endl;
//    cout << p.getY() << endl;
//
//    Point<float> x = sum<Point>(p, q);
//    cout << x.getX() << endl;
    return 0;
}
