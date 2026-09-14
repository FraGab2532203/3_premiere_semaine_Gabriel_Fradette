#pragma once
#include "Vaisseau.h"



class Faction
{
private:
	int attaque;
	int defense;
	int vie;
	int capacite;
	string nom;
public:
	Faction();
	Faction(int attaque, int defense, int vie, int capacite, string nom);
	~Faction();

	virtual string getNom();
	virtual string to_string();

};

