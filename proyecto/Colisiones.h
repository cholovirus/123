#pragma once
#include "SFML/Graphics.hpp"

using namespace sf;
using namespace std;

template <typename A >
class Colisiones
{
public:
	Colisiones(RectangleShape &personaje) : personaje(personaje) {}
	Vector2f Posicion() { return  personaje.getPosition(); }
	Vector2f Tamano() { return  personaje.getSize() / 2.0f; }
	void Mover(A dirx, A diry) { personaje.move(dirx, diry); }
	bool VerificarCo(Colisiones &objetos, Vector2f &direccion, A detenerse);

private:
	RectangleShape &personaje;
};

