#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>


using namespace sf;
using namespace std;


class Backgroud
{
public:
	
	Backgroud(int,int,string);

	//void colision();
	void eventoP();
	void draw();
	void bucle();
	void actualizar();
	

protected:
	RenderWindow *back;
	int fps = 60;
	Texture * texBackground, *texPlayer;
	Sprite * s1,*s2;

	Event *evento;


};

