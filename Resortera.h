#pragma once
#include "Bird.h"


class Resortera
{
protected:
    
    float fuerzaElastica;
public:
    // Constructor
    Resortera(float fuerza);

    // Otros m�todos
    void lanzar(Bird* bird,float estiramiento,float angulo);
};