#pragma once
#include "SFML/Graphics.hpp"
#include "Animacion.h"
#include "Colisiones.h"
#include "Animacion.h"
#include "Vida.h"
#include "Ataque.h"
#include <vector>

using namespace sf;
using namespace std;

class Player
{
private:
	Animacion<float> animacion;
	unsigned int fila;
	bool cara_personaje;
	Texture vidaT;
	Vida vidaV;

	Texture balaT;
	vector<Ataque> balaA;

	Clock clock_ataque;
	Clock clock_dash;

	RectangleShape cuerpo;
	float velocidad;
	float vel_ataque;
	float dash_f;
	float vida;

	Vector2f velocidad_Vector;
	bool poderSaltar;
	bool vivo;
	bool atacando;
	bool muriendo;
	float saltoAlto;


public:
	Player(Texture *textura,Vector2u imagenContador, float cambioTiempo,float velocidad, float salto, float vel_ataque,float vida);
	void Controles(RenderWindow &window);
	void update(float deltaTiempo, RenderWindow &window);
	void draw(RenderWindow &window);

	void tenerColision(Vector2f direccion);
	void disparo(Vector2i posicion);
	void dash();
	void tenerDagno(float dagno);

	Vector2f tenerPosion() { return cuerpo.getPosition(); }
	void ponerPosicion(Vector2f posicion) { cuerpo.setPosition(posicion); }
	bool tenerVida() { return vivo; }
	void ponerVida(bool x) { vivo = x; }
	void ponerSalto(bool x) { poderSaltar = x; }
	Colisiones<float> tenerColision() { return Colisiones<float>(cuerpo); }

	Vector2f tenerVelocidad() { return velocidad_Vector; }
	void ponerVelocidad(float velX, float velY) { velocidad_Vector.x = velX; velocidad_Vector.y = velY; }
	vector<Ataque> *tenerBuster() { return  &balaA; }
	float tenerVidaF() { return vida; }
	void ponerVidaV(float x) { vida = x; }


	bool tenerAtaque() { return atacando; }
	void ponerAtaque(bool x) { atacando = x; }

	bool tenerMuerte() { return muriendo; }
	void ponerMuerte(bool x) { muriendo = x; }
};

