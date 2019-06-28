#include <bala.h>
#include <allegro.h>
using namespace std;
#include <iostream>

class Enemigo{
private:
    BITMAP *B1bmp;
    BITMAP *B1;
    int px,py;
    int vida;
public:
    Enemigo(int px,int py,int vida);
    void patronAtaque();
    void drawEnemigo();
};

