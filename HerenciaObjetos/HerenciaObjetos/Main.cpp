#include "personaje.h"
#include "finalBoss.h"
#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include<stdlib.h>
#include<time.h>
#pragma comment(lib, "winmm.lib")

Personaje Personaje1("Keo", 0, 0, 0, 1), finalBoss("Jincho", 0, 0, 0, 1);

int mapa(int pPosicionY, int pPosicionX) {
	std::string mapa[10][5] = {  {"[ ]", "[ ]", "[ ]", "[ ]", "[ ]"},
								 {"[ ]", "[ ]", "[ ]", "[ ]", "[ ]"},
								 {"[ ]", "[ ]", "[ ]", "[ ]", "[ ]"},
								 {"[ ]", "[ ]", "[ ]", "[ ]", "[ ]"},
								 {"[ ]", "[ ]", "[ ]", "[ ]", "[ ]"},
								 {"[ ]", "[ ]", "[ ]", "[ ]", "[ ]"},
								 {"[ ]", "[ ]", "[ ]", "[ ]", "[ ]"},
								 {"[ ]", "[ ]", "[ ]", "[ ]", "[ ]"},
								 {"[ ]", "[ ]", "[ ]", "[ ]", "[ ]"},
								 {"[ ]", "[ ]", "[ ]", "[ ]", "[ ]"}
	};
	mapa[pPosicionX][pPosicionY] = "[X]";

}


int main() {
	
}