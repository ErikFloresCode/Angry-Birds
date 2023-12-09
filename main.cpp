#include <iostream>
#include "Resortera.h"

using namespace std;

int main() {

	Bird red;
	cout << "red en posicion inicial: " << endl;
	Resortera* resortera = Resortera::getInstance(20);
	resortera->lanzar(&red, 5, 30);

	cout << "red en posicion despues de lanzar: " << endl;
	return 0;
}