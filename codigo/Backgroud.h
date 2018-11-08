#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>


using namespace sf;
using namespace std;


class Backgroud
{
public:
	
	Backgroud(int,int,string);

	void colision();
	void eventoP();
	void draw();
	void bucle();
	

protected:
	RenderWindow *back;
	int fps = 60;
	Texture * text, *text2;
	Sprite * s1,*s2;

	Event *evento;


};

