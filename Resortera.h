#pragma once
#include "Bird.h"


class Resortera
{
protected:
    
    float fuerzaElastica;
public:
    // Constructor
    Resortera(float fuerza);

    // Otros métodos
    void lanzar(Bird* bird,float estiramiento,float angulo);
};