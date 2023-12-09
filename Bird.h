#pragma once
#include "Actor.h"
class Bird :
    public Actor
{
private:
    //atributos
    float peso;
public:
    //constructor
    Bird();
    //setters
    void setPeso(float peso);
    //getters
    float getPeso();
    //metodos
    
};

