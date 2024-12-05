#pragma once
#include <iostream>
using namespace std;

class CCarre
{
public:
	CCarre();
	CCarre(int dx, int dy);
	void Setsx(int sx1);
	void Setsy(int sy1);
	void Setcote(int cote1);
	void Afficher();
	int Getsx();
	int Getsy();
	int GetCote();

	// "D�place" le carr� sans le dessiner. Les attributs x et y  
	// sont modifi�s en ajoutant ou retranchant la valeur de saut en fonction de  
	// la direction : par ex direction nord saut=2 y=y-2 
	// Entr�es : 
	//  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
	//   - saut : nombre de pixels de d�placement du carr� 
	// Sortie : Aucune 
	void Deplacer(char direction, int saut);

private:
	int sx, sy, cote;
};
