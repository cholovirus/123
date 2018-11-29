#pragma once
#include<SFML/Graphics.hpp>
#include "Animacion.h"
#include "Colisiones.h"

using namespace sf;
using namespace std;

class Ataque
{
public:
	Ataque(Texture *textura, Vector2u imagenContador, float cambioTiempo, float dagno, float duracion, float velocidad, Vector2f direccion, Vector2f inicio);
	void update(float deltaTimpo);
	void draw(RenderWindow& window);
	bool eliminar();
	Vector2f tenerPosicion() { return cuerpo.getPosition(); }
	Colisiones<float> tenerColision() { return Colisiones<float>(cuerpo); }
	float tenerDagno() { return dagno; }
	void Vida(bool x) { vivo_muerto = x; }
	bool tenerVida() { return vivo_muerto; }

private:
	Clock clock_duracion;
	RectangleShape cuerpo;
	Vector2f direccion;
	Vector2f inicio;
	//Animacion<float> animacion;
	unsigned int fila;
	bool cara_personaje=true;
	float dagno;
	float duracion;
	float velocidad;
	bool vivo_muerto;
	
};

