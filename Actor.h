#pragma once
#include "Coordenada.h"
class Actor
{
private:
	//atributos
	Coordenada posicion;
public:
	//constructor
	Actor();
	//setters
	void setPosicion(Coordenada posicion);
	//getters
	Coordenada getPosicion();
	//metodos
};

