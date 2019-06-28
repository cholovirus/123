#include "Enemigo.h"

Enemigo::Enemigo(int px,int py,int vida){
        this->px=px;    this->py=py;
        this->vida=vida;
        this->B1bmp=load_bitmap("recursos/enemigo.bmp",NULL);
        this->B1=create_bitmap(180,75);
}

void Enemigo::void drawEnemigo(){
        blit(B1bmp,B1,0,0,0,0,180,75);
        draw_sprite(buffer,this->B1,px,py);
}
