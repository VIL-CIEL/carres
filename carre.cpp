#include <iostream>
#include "carre.h"
using namespace std;

int main() {

	CCarre carre;

	carre.Setsx(5);
	carre.Setsy(7);
	carre.Setcote(2);
	
	cout << "x : " << carre.Getsx() << ", y : " << carre.Getsy() << ", cote : " << carre.GetCote();

	return 0;
}