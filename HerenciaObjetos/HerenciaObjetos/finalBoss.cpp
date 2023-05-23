#pragma once
#include "finalBoss.h"

using namespace std;

//GETTERS
int finalBoss::get_ice_attack() {
	return ice_attack;
}
int finalBoss::get_fire_attack() {
	return fire_attack;
}

//SETTERS
void finalBoss::set_ice_attack(int pIce_Attack) {
	ice_attack = pIce_Attack;
}
void finalBoss::set_fire_attack(int pFire_Attack) {
	fire_attack = pFire_Attack;
}

//COSNTRUCTOR
finalBoss::finalBoss(string pName, int pVida, int pAtaque, int pPosicionX, int pPosicionY, int pIce_attack, int pFire_attack)
	:Personaje(pName, pVida, pAtaque, pPosicionX, pPosicionY) {
	ice_attack = pIce_attack; fire_attack = pFire_attack;
}