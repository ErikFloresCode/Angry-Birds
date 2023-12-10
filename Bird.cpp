#include "Bird.h"

Bird::Bird() {
	this->peso = 1;
}

void Bird::setPeso(float peso) {
	this->peso = peso;
}

float Bird::getPeso() {
	return this->peso;
}