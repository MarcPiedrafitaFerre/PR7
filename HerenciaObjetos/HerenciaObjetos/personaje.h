#pragma once
#pragma once
#include <iostream>
class Personaje {
private:
    std::string nombre;
    int vida;
    int ataque;
    int posicionX;
    int posicionY;
public:
    //Constructor   
    Personaje(std::string pNombre, int pVida, int pAtaque, int pPosicionX, int pPosicionY);

    //Getters
    std::string getNombre();
    int getVida();
    int getAtaque();
    int getPosicionX();
    int getPosicionY();

    //Setters
    void setNombre(std::string pNombre);
    void setVida(int pVida);
    void setAtaque(int pAtaque);
    void setPosicionX(int pPosicionX);
    void setPosicionY(int pPosicionY);

    //Methods
    void printName1();
    void printName2();

};





