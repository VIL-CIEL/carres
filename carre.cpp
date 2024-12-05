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

	return 0;
}