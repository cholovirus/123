#include "Character.h"

Character::Character(int px=0, int py=0){
        this->px=px;   this->py=py;
        this->P1bmp= load_bitmap("recursos/nave.bmp",NULL);
        this->P1=create_bitmap(48,36);
}

void Character::movimiento(){
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

void Character::disparo(){
        if(key[KEY_A]){a.drawBala(this->px,this->py);}
        if(key[KEY_B]){b.drawBala(this->px,this->py);}
}

void Character::drawChar(){
        blit(P1bmp,P1,0,0,0,0,48,36);
        draw_sprite(buffer,this->P1,px,py);
 }
