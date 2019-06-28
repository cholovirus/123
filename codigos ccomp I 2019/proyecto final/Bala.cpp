#include "Bala.h"
Bala::Bala(int px_=0,int py_=0):px(px_),py(py_){
        this->balabmp=load_bitmap("recursos/disparo.bmp",NULL);
        this->Ba1=create_bitmap(32,65);
}
void Bala::drawBala(int px_,int py_){
        blit(balabmp,Ba1,0,10,0,0,32,65);
        draw_sprite(buffer,this->Ba1,px_,py_);

 }
