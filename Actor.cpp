#include "Actor.h"

Actor::Actor() {
	posicion = Coordenada();
}

void Actor::setPosicion(Coordenada posicion) {
	this->posicion = posicion;
}

Coordenada Actor::getPosicion() {
	return this->posicion;
}