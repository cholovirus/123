#include <allegro.h>
using namespace std;
#include <iostream>
class Bala{
protected:
    BITMAP *balabmp;
    BITMAP *Ba1;
    int px,py;
    //int avanzar;

public:
    Bala(int px_,int py_);
    
    void drawBala(int px_,int py_);
};


