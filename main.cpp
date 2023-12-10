#include <iostream>
#include "Resortera.h"

using namespace std;

int main() {

	Bird red;
	cout << "red en posicion inicial: " << red.getPosicion().x << "," << red.getPosicion().y << endl;
	Resortera* resortera = Resortera::getInstancia(20);
	resortera->lanzar(&red, 5, 30);

	cout << "red en posicion despues de lanzar: " << red.getPosicion().x << "," << red.getPosicion().y << endl;
	return 0;
}