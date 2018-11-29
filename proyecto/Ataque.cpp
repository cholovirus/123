#include "Ataque.h"


Ataque::Ataque(Texture *textura, Vector2u imagenContador, float cambioTiempo, float dagno, float duracion, float velocidad, Vector2f direccion, Vector2f inicio)//:animacion(textura,imagenContador,cambioTiempo)
{
	this->dagno = dagno;
	this->duracion = duracion;
	this->velocidad = velocidad;
	this->direccion = direccion;
	this->inicio = inicio;
	this->vivo_muerto = true;

	fila = 0;
	cara_personaje = true;
	cuerpo.setSize(Vector2f(16, 8));
	cuerpo.setOrigin(cuerpo.getSize() / 2.0f);
	cuerpo.setPosition(inicio);
	cuerpo.setTexture(textura);
	cuerpo.setScale(2, 2);

}


void Ataque::update(float deltaTiempo)
{
		
	if (clock_duracion.getElapsedTime().asSeconds() < duracion) {
		
		Vector2f vel;
		float dirX = direccion.x - inicio.x;
		float dirY = direccion.y - inicio.y;
		float angulo = atan2f (dirY, dirX);
		vel.x = cos(angulo)*velocidad;
		vel.y = sin(angulo)*velocidad;

		if (vel.x > 0)cara_personaje = true;
		else cara_personaje = false;
		fila = 0;
		
		/*animacion.update(fila,deltaTiempo, cara_personaje, false, false);
		cuerpo.setTextureRect(animacion.personaje);*/
		cuerpo.move(vel * deltaTiempo);
	}
}

void Ataque::draw(RenderWindow & window)
{
	window.draw(cuerpo);
}

bool Ataque::eliminar()
{
	if (clock_duracion.getElapsedTime().asSeconds() < duracion) return false;
	else return true;
}
