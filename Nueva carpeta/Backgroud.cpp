#include "Backgroud.h"


Backgroud::Backgroud(int rx,int ry,string nombre)
{

	back = new RenderWindow(VideoMode(rx, ry), nombre);
	back->setFramerateLimit(fps);
	

	texBackground = new Texture;
	texPlayer = new Texture;

	texBackground->loadFromFile("imagenes/fondo.png");
	texPlayer->loadFromFile("imagenes/megaman.png");

	s1 = new Sprite(*texBackground);
	s2 = new Sprite(*texPlayer);
	/*s1->setPosition(0, 400);
	s2->setPosition(400, 400);*/
	
	
	evento = new Event;
	bucle();
	

	

}

/*void Backgroud::colision()
{
	
	if (s1->getGlobalBounds().intersects(s2->getGlobalBounds())) {
		s1->move(Vector2f(-10, 0));
	}
}*/

void Backgroud::eventoP()
{
	while (back->pollEvent(*evento)) {
		switch (evento->type) {
		case Event::Closed:
			back->close();
			break;
		case Event::KeyPressed:
			if (Keyboard::isKeyPressed(Keyboard::Escape)) {
				exit(1);
			}
			//movimientoW(s1,10);
			if (Keyboard::isKeyPressed(Keyboard::W)) {
				
				s1->setPosition(s1->getPosition().x,s1->getPosition().y-10);
			}
			if (Keyboard::isKeyPressed(Keyboard::D)) {
				s1->setPosition(s1->getPosition().x+10, s1->getPosition().y);
			}
			if (Keyboard::isKeyPressed(Keyboard::A)) {
				s1->setPosition(s1->getPosition().x-10, s1->getPosition().y);
			}
			if (Keyboard::isKeyPressed(Keyboard::S)) {
				s1->setPosition(s1->getPosition().x, s1->getPosition().y + 10);
			}
			
		}
	}
}

void Backgroud::actualizar()
{
	//s2->move(5, -1);
}

void Backgroud::draw()
{
	back->clear(Color::Black);

	back->draw(*s1);
	back->draw(*s2);

	back->display();
}

void Backgroud::bucle()
{
	while (back->isOpen()) { 
		eventoP();
		actualizar();
		draw();
		//colision();
		}
		
	
}




