#include "BackGround.h"

BackGround::Background(int largo, int ancho){
	this->ancho=ancho;
        this->largo=largo;
        buffer=create_bitmap(largo,ancho);
}
void BackGround::pantalla(){
	blit(buffer,screen,0,0,0,0,this->largo,this->ancho);
}
void BackGround::fondo(){
	BITMAP *F1bmp=load_bitmap("recursos/fondo.bmp",NULL);
        BITMAP *F1=create_bitmap(880,600);
        blit(F1bmp,F1,50,0,0,0,880,600);
        draw_sprite(buffer,F1,0,0);
} 
