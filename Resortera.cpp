#include "Resortera.h"

Resortera* Resortera::instance = nullptr;

Resortera::Resortera(float fuerza)/*:fuerzaElastica(fuerza)*/ {
    this->fuerzaElastica = fuerza;
}

Resortera* Resortera::getInstance(float fuerza) {
    if (instance == nullptr) {
        instance = new Resortera(fuerza);
    }
    return instance;
}