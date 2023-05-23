#include "personaje.h"
#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

//constructor
Personaje::Personaje(std::string pNombre, int pVida, int pAtaque, int pPosicionX, int pPosicionY) {
    nombre = pNombre;
    vida = pVida;
    ataque= pAtaque;
    posicionX = pPosicionX;
    posicionY = pPosicionY;
}

//getters
std::string Personaje::getNombre() {
    return nombre;
}

int Personaje::getVida() {
    return vida;
}
int Personaje::getAtaque() {
    return ataque;
}

int Personaje::getPosicionX() {
    return posicionX;
}
int Personaje::getPosicionY() {
    return posicionY;
}

//setters
void Personaje::setNombre(std::string pNombre) {
    nombre = pNombre;
}

void Personaje::setVida(int pVida) {
    vida = pVida;
}
void Personaje::setAtaque(int pAtaque) {
    ataque = pAtaque;
}

void Personaje::setPosicionX(int pPosicionX) {
    posicionX = pPosicionX;
}
void Personaje::setPosicionY(int pPosicionY) {
    posicionX = pPosicionY;
}

//Methods
void Personaje::printName1() {
    std::cout << "-->" << getNombre() << " es el conductor del McLaren 720S\n";
}
void Personaje::printName2() {
    std::cout << "-->" << getNombre() << " es el conductor del Lamborghini Huracan\n";
}
