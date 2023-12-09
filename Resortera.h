#pragma once

class Resortera
{
protected:
    static Resortera* instance;
    float fuerzaElastica;

    // Constructor privado para evitar instanciaci�n directa
    Resortera(float fuerza);

public:
    // M�todo est�tico para obtener la instancia �nica
    static Resortera* getInstance(float fuerza);

    // Otros m�todos y atributos de la clase
};