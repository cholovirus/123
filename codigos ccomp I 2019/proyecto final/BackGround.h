#include <allegro.h>
using namespace std;
#include <iostream>

class BackGround{
private:
	int ancho, largo;
	BITMAP buffer;  
public:
	BackGround(int largo, int ancho);
	void pantalla();
	void fondo();
};
