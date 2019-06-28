#include <iostream>
#include <allegro.h>
using namespace std;

BITMAP *buffer;//usar new
template<typename A>
class BackGround{
private:
    A ancho, largo;

public:
    BackGround(A largo, A ancho){
        this->ancho=ancho;
        this->largo=largo;
        buffer=create_bitmap(largo,ancho);
    }

    void patalla(){
        blit(buffer,screen,0,0,0,0,this->largo,this->ancho);
    }
    void fondo(){
        BITMAP *F1bmp=load_bitmap("recursos/fondo.bmp",NULL);
        BITMAP *F1=create_bitmap(880,600);
        blit(F1bmp,F1,50,0,0,0,880,600);
        draw_sprite(buffer,F1,0,0);
    }


};

class Bala{
protected:
    BITMAP *balabmp;
    BITMAP *Ba1;
    int px,py;
    int avanzar;

public:
    Bala(int px_=0,int py_=0):px(px_),py(py_){
        this->balabmp=load_bitmap("recursos/disparo.bmp",NULL);
        this->Ba1=create_bitmap(32,65);
    }
    void drawBala(int px_,int py_,int avanzar){
        blit(balabmp,Ba1,0,10,0,0,32,65);
        draw_sprite(buffer,this->Ba1,px_,py_);

    }
    //virtual void tipoBala()=0;
};

class Character{
private:
    BITMAP *P1bmp;
    BITMAP *P1;
    int px,py;
    int direccion=0;
    Bala a;
public:
    Character(int px=0, int py=0){
        this->px=px;   this->py=py;
        this->P1bmp= load_bitmap("recursos/nave.bmp",NULL);
        this->P1=create_bitmap(48,36);
    }
    void movimiento(){
        this->direccion=0;
        if(key[KEY_UP]){this->direccion=1;}
        else if(key[KEY_RIGHT]){this->direccion=2;}
        else if(key[KEY_DOWN]){this->direccion=3;}
        else if(key[KEY_LEFT]){this->direccion=4;}

        if((this->direccion==1)){py-=15;if(py<50){py=50;}}
        if((this->direccion==2)){px+=15;if(px>800){px=800;}}
        if((this->direccion==3)){py+=15;if(py>545){py=545;}}
        if((this->direccion==4)){px-=15;if(px<5){px=5;}}

    }
    void disparo(){
        int j=px+10;
        if(key[KEY_A]){a.drawBala(j++,this->py,NULL);}
    }
    void drawChar(){

        blit(P1bmp,P1,0,0,0,0,48,36);
        draw_sprite(buffer,this->P1,px,py);
    }

};

class Enemigo{
private:
    BITMAP *B1bmp;
    BITMAP *B1;
    int px,py;
    int vida;
public:
    Enemigo(int px,int py,int vida){
        this->px=px;    this->py=py;
        this->vida=vida;
        this->B1bmp=load_bitmap("recursos/enemigo.bmp",NULL);
        this->B1=create_bitmap(180,75);
    }
    void patronAtaque(){
    }
    void drawEnemigo(){
        blit(B1bmp,B1,0,0,0,0,180,75);
        draw_sprite(buffer,this->B1,px,py);
    }

};
class Boss:public Enemigo{
public:
    Boss(int px_,int py_, int vida_):Enemigo(px_,py_,vida_){}

};


///patron estrategia con disparos


class Bala1:public Bala{
public:

    void tipoBala(){

    }
};
class Bala2:public Bala{
public:

    void tipoBala(){
    }
};


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
