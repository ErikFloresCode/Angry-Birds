#pragma once
#include <vector>
#include "Actor.h"
class Bird :
    public Actor
{
private:
    //atributos
    float peso;
    //vector<Coordenada> trayectoria;
public:
    //constructor
    Bird();
    //setters
    void setPeso(float peso);
    //getters
    float getPeso();
    //metodos
    
};
