#include <iostream>
#include "carre.h"
using namespace std;

int main() {

	CCarre carre[4];

	for (int i = 0; i < 4; i++) {
		carre[i].Setsx(2*i);
		carre[i].Setsy(2*i);
		carre[i].Setcote(5*i);

		carre[i].Afficher();
	}

	CCarre* carre2;
	carre2 = new CCarre(15,26);
	cout << "\n";

	carre2->Setcote(5);
	carre2->Deplacer(5, 10);
	carre2->Afficher();
	
	delete carre2;
	return 0;
}