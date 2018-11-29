#include "Vida.h"






Vida::Vida(Texture * textura, Vector2u imagenContador, float tiempoCambio, float vida):animacion(textura, imagenContador, tiempoCambio)
{
	cuerpo.setSize(Vector2f(32, 4));
	cuerpo.setOrigin(cuerpo.getSize() / 2.0f);
	cuerpo.setPosition(960.0f, 900.0f);
	cuerpo.setTexture(textura);
	cuerpo.setScale(2, 2);
}


void Vida::update(float deltatiempo, float vida, Vector2f posicion, float tamano)
{
	if (vida >= 10) fila = 9;
	if (vida >= 20) fila = 8;
	if (vida >= 30) fila = 7;
	if (vida >= 40) fila = 6;
	if (vida >= 50) fila = 5;
	if (vida >= 60) fila = 4;
	if (vida >= 70) fila = 3;
	if (vida >= 80) fila = 2;
	if (vida >= 90) fila = 1;
	if (vida >= 100) fila = 0;

	cuerpo.setPosition(posicion.x, posicion.y - tamano * 1.20f);
	animacion.update(fila, deltatiempo, true, false, false);
	cuerpo.setTextureRect(animacion.personaje);
	
}

