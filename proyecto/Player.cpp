#include "Player.h"





Player::Player(Texture * textura, Vector2u imagenContador, float cambioTiempo, float velocidad, float salto, float vel_ataque, float vida):animacion(textura,imagenContador,cambioTiempo)
{

}

void Player::Controles(RenderWindow & window)
{
	ponerAtaque(false);
	ponerMuerte(false);

	if (Keyboard::isKeyPressed(Keyboard::A))
	{
		velocidad_Vector.x -= velocidad;
	}
	if (Keyboard::isKeyPressed(Keyboard::D))
	{
		velocidad_Vector.x += velocidad;
	}
	if (Keyboard::isKeyPressed(Keyboard::W))
	{
		velocidad_Vector.y -= velocidad;
	}
	if (Keyboard::isKeyPressed(Keyboard::S))
	{
		velocidad_Vector.y += velocidad;
	}
}
