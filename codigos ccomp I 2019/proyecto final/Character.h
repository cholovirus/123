#include <Bala.h>
#include <Bala1.h>
#include <allegro.h>
using namespace std;
#include <iostream>

class Character{
private:
    BITMAP *P1bmp;
    BITMAP *P1;
    int px,py;
    int direccion=0;
    Bala a; Bala1 b;

public:
    Character(int px, int py);
    void movimiento();
    void disparo();
    void drawChar();

};



