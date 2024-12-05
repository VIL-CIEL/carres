#include <iostream>
#include "carre.h"
using namespace std;


CCarre::CCarre(int dx, int dy){
	sx = dx;
	sy = dy;
	cote = 0;
}


void CCarre::Setsx(int sx1) {
	sx = sx1;
}

void CCarre::Setsy(int sy1) {
	sy = sy1;
}

void CCarre::Setcote(int cote1) {
	cote = cote1;
}

void CCarre::Afficher() {
	cout << "x : " << sx << ", y : " << sy << ", cote : " << cote;
}

int CCarre::Getsx() {
	return sx;
}

int CCarre::Getsy() {
	return sy;
}

int CCarre::GetCote() {
	return cote;
}

void CCarre::Deplacer(char direction, int saut) {

	if (direction == 'n')
		sy -= saut;

	else if (direction == 's')
		sy += saut;

	else if (direction == 'o')
		sx -= saut;

	else if (direction == 'e')
		sx += saut;
}