#include <iostream>
#include "Polygon.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Circulo.h"
#include "PolygonArray.h"
using namespace std;

int main()
{
    Rectangulo a(4,5);
    Rectangulo b(3,7);
    Rectangulo c(4,7);
    Rectangulo *z=&a;
    z->printV();
    a.area();
    a.printPo();

    Rectangulo arr[]={a,b};
    int size =sizeof(arr)/sizeof(arr[0]);
    PolygonArray pa(arr,size);
    pa.push_back(c);
    pa.print();

    return 0;
}
