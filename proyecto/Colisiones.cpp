#include "Colisiones.h"


template<typename A>
bool Colisiones<A>::VerificarCo(Colisiones & objetos, Vector2f & direccion, A empujar)
{	

	Vector2f otraPosicion = objetos.Posicion();
	Vector2f otroTamano = objetos.Tamano();
	Vector2f laPosicion = Posicion();
	Vector2f elTamano = Tamano();

	A deltaX = otraPosicion.x - laPosicion.x;
	A deltaY = otraPosicion.y - laPosicion.y;

	A intersccionX = abs(deltaX) - (otroTamano.x + elTamano.x);
	A intersccionY = abs(deltaY) - (otroTamano.y + elTamano.y);
	
	if (intersccionX < 0.0f && intersccionY < 0.0f)
	{
		empujar = min(max(empujar, 0.0f), 1.0f);
		
		if (intersccionX > intersccionY)
		{
			if (deltaX > 0.0f)
			{
				// 
				Move(intersccionX *(1.0f - empujar ), 0.0f);
				objetos.Move(-intersccionX * empujar, 0.0f);

				direccion.x = 1.0f;
				direccion.y = 0.0f;

			}
			else
			{
				//
				Move(-intersccionX * (1.0f - empujar), 0.0f);
				objetos.Move(intersccionX * empujar, 0.0f);

				direccion.x = -1.0f;
				direccion.y = 0.0f;
			}

		}
		else
		{
			if (deltaY > 0.0f) 
			{
				
				//
				Move(0.0f, intersccionY *(1.0f - empujar));
				objetos.Move(0.0f, -intersccionY * empujar);

				direccion.x = 0.0f;
				direccion.y = 1.0f;
			} 
			else 
			{
				//
				Move(0.0f, -intersccionY * (1.0f - empujar));
				objetos.Move(0.0f, intersccionY * empujar);

				direccion.x = 0.0f;
				direccion.y = -1.0f;
			} 

		}
		return true;
	}

	return false;
}

