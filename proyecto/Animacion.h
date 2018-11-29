#pragma once

#include "SFML/Graphics.hpp"
#include <iostream>

using namespace sf;
using namespace std;

template <typename A>
class Animacion
{
public:

	Animacion(Texture *textura,Vector2u ponerImagen, A cambioTiempo);
	void update(int fila, A tiempo, bool imagenPrimera, bool ataque, bool muerte);

	IntRect personaje; //interactuar
	bool ataque;
	bool muerte;

private:
	//libreria SFML
	Vector2u imagenActual;
	Vector2u imagenContador;

	A tiempoTotal;
	A tiempoCambio;

};



