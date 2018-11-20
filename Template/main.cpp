#include <iostream>
#include "Point.h"
#include "PointArray.h"

using namespace std;

int main()
{
    Point<int> p(1,3);
    Point<int> q(2,4);
    Point<int> r(6,7);


    /*Point arr[]={p,q,r};
    int size =sizeof(arr)/sizeof(arr[0]);
    PointArray pa;
    PointArray pa2(arr,size);
    cout <<pa2.getSize()<<endl;
    //pa2.print();
    pa2.push_back(q2);
    //pa2.insertar(q2,0);
    pa2.print();
    cout<<"-----"<<endl;
    cout<<"-----"<<endl;
    pa2.remover(0);
    pa2.print();*/

    return 0;
}
