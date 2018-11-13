#include <iostream>
#include "Polygon.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "PolygonArray.h"
using namespace std;

int main()
{
    Rectangulo a(4,5);
    Rectangulo b(2,4);
    Rectangulo c(2,4);
    Rectangulo arr[]={a,b};
    int size =sizeof(arr)/sizeof(arr[0]);
    PolygonArray pa(arr,size);
    pa.push_back(c);
    pa.print();

    return 0;
}
