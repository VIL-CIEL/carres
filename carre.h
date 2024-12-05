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

	// "Déplace" le carré sans le dessiner. Les attributs x et y  
	// sont modifiés en ajoutant ou retranchant la valeur de saut en fonction de  
	// la direction : par ex direction nord saut=2 y=y-2 
	// Entrées : 
	//  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
	//   - saut : nombre de pixels de déplacement du carré 
	// Sortie : Aucune 
	void Deplacer(char direction, int saut);

private:
	int sx, sy, cote;
};
