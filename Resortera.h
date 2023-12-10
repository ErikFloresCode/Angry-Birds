#pragma once
#include "Bird.h"


class Resortera
{
protected:
    float fuerzaElastica;
    //instancia unica
    static Resortera* instancia;
    // Constructor protegido para evitar instaciacion multiple
    Resortera(float fuerza);
public:
    static Resortera* getInstancia(float fuerza);
    // Otros métodos
    void lanzar(Bird* bird,float estiramiento,float angulo);
};