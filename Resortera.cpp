#include "Resortera.h"
#include <cmath>

Resortera* Resortera::instancia = nullptr;

Resortera::Resortera(float fuerza) {
	this->fuerzaElastica = fuerza;
}

Resortera* Resortera::getInstancia(float fuerza) {
	if (instancia == nullptr) {
		//en caso de ser la primera vez se crea una nueva
		instancia = new Resortera(fuerza);
	}
	return instancia;
}

void Resortera::lanzar(Bird* bird, float estiramiento, float angulo) {
	// Calcular la velocidad inicial usando la fórmula proporcionada
	float velocidad_inicial = std::sqrt((fuerzaElastica / bird->getPeso()) * estiramiento * estiramiento);

	// Calcular el alcance horizontal usando la segunda fórmula proporcionada
	float alcance_horizontal = (velocidad_inicial * velocidad_inicial * std::sin(2 * angulo)) / 9.8;

	//actulizar la posicion del bird
	bird->setPosicion(Coordenada(alcance_horizontal, bird->getPosicion().y));
}