#include "Animacion.h"



template<typename A>
inline Animacion<A>::Animacion(Texture *textura, Vector2u ponerImagen, A tiempoCambio)
{
	this->imagenContador = ponerImagen;
	this->tiempoCambio = tiempoCambio;

	tiempoTotal = 0.0f;
	imagenActual.x = 0;

	personaje.width = textura->getSize().x / A(ponerImagen.x);
	personaje.height = textura->getSize().y / A(ponerImagen.y);

}

template<typename A>
inline void Animacion<A>::update(int fila, A tiempo, bool imagenPrimera, bool ataque, bool muerte)
{
	if (imagenActual.y != fila) imagenActual.x = 0;
	imagenActual.y = fila;
	tiempoTotal += tiempo;
	 
	if (tiempoTotal >= tiempoCambio) {
		tiempoTotal -= tiempoCambio;
		imagenActual.x++;
		if (imagenActual.x >= imagenContador.x)
			imagenActual.x = 0;
	}

	personaje.top = imagenActual.y*personaje.height;

	if (imagenPrimera) {
		personaje.left = (imagenActual.x*personaje.width);
		personaje.width = abs(personaje.width); //abs Devuelve el valor absoluto del parámetro
	}
	else {
		personaje.left = (imagenActual.x + 1)* abs(personaje.width);
		personaje.width = -abs(personaje.width);
	}

	if (ataque && imagenActual.x > 6)
		this->ataque = true;
	else
		this->ataque = false;
	if (muerte && imagenActual.x > 8)
		this->muerte = true;
	else
		this->muerte = false;

}
