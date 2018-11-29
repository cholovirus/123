#pragma once
#include "SFML/Graphics.hpp"
#include "Animacion.h"

using namespace sf;
using namespace std;


class Vida
{
public:
	Vida(Texture *textura, Vector2u imagenContador, float tiempoCambio, float vida);
	void update(float deltatiempo, float vida, Vector2f posicion, float tamano);
private:
	RectangleShape cuerpo;
	Animacion<float> animacion;
	unsigned int fila; //variable neutra siempre sera positiva
};


