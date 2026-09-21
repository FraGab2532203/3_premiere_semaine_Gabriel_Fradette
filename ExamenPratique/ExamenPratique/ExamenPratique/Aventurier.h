#pragma once
#include <iostream>

#include "Quete.h"
#include <vector>
#include "FactoryQuete.h"

class Aventurier
{
private:
	int niveau;
	std::vector<Quete*> tabQuete;

public:
	Aventurier(int niv);
	~Aventurier();


	void afficherQuete();
	void ajouterQuete(Quete* quete);
	int getNiv();
};

