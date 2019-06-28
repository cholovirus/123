#include "Bala1.h"

Bala1::Bala1(int x_=0,int y_=0 ):Bala(x_,y_){
        this->balabmp=load_bitmap("recursos/disparo.bmp",NULL);
        this->Ba1=create_bitmap(32,87);
}

void Bala1::drawBala(int px_,int py_){
        blit(balabmp,Ba1,164,0,0,0,32,87);
        draw_sprite(buffer,this->Ba1,px_,py_);
}
