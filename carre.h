#pragma once
#include <iostream>
using namespace std;

class CCarre
{
public:
	CCarre();
	void Setsx(int sx1);
	void Setsy(int sy1);
	void Setcote(int cote1);
	void Afficher();

private:
	int sx, sy, cote;
};
