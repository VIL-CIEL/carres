#include <iostream>
#include "carre.h"
using namespace std;

int main() {

	CCarre carre(40,50);

	carre.Setcote(20);
	carre.Afficher();

	carre.Deplacer('n', 9);
	cout << "\nDeplacement de 9 au nord >> ";
	carre.Afficher();
	carre.Deplacer('s', 5);
	cout << "\nDeplacement de 5 au sud >> ";
	carre.Afficher();
	carre.Deplacer('e', 3);
	cout << "\nDeplacement de 3 a l'est >> ";
	carre.Afficher();
	carre.Deplacer('o', 15);
	cout << "\nDeplacement de 15 a l'ouest >> ";
	carre.Afficher();

	return 0;
}