#pragma once

class Resortera
{
protected:
    static Resortera* instance;
    float fuerzaElastica;

    // Constructor privado para evitar instanciación directa
    Resortera(float fuerza);

public:
    // Método estático para obtener la instancia única
    static Resortera* getInstance(float fuerza);

    // Otros métodos y atributos de la clase
};