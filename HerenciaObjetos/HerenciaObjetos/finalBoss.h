#pragma once
#include "personaje.h"

class finalBoss : public Personaje {
public:
	int ice_attack;
	int fire_attack;
private:
	finalBoss(std::string pNombre, int pVida, int pAtaque, int pPosicionX, int pPosicionY, int pIce_Attack, int pFire_Attack);

	//GETTERS
	int get_ice_attack();
	int get_fire_attack();

	//SETTERS
	void set_ice_attack(int pIce_Attack);
	void set_fire_attack(int pFire_Attack);

	//METHODS
	void printStats();

	//CONSTRUCTORES
};