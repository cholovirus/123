#include <iostream>
#include <allegro.h>
using namespace std;
#include <Bala.h>
#include <Bala1.h>
#include <BackGround.h>
#include <Enemigo.h>
#include <Character.h>
int main()
{
    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,880,600,0,0);

    //Bala dis;
    BackGround <int>mapa(880,600);
    Character p1(50,50);
    Enemigo e1(650,250,200);
    while(!key[KEY_ESC]){

        clear(buffer);
        mapa.fondo();
        p1.drawChar();
        p1.disparo();

        //dis.drawBala(40,40);
        e1.drawEnemigo();

        e1.patronAtaque();
        p1.movimiento();

        mapa.patalla();


        rest(5);

    }
    return 0;
}
END_OF_MAIN();
