#pragma once
#include <vector>
#include "Vaisseau.h"
class Station
{
private:
	int platiniumDisponible;
	int vieStation;
	std::vector <Vaisseau*> vecVaisseau;
public:
	Station();
	~Station();

	std::vector<Vaisseau*> getVaisseauDispo();
	std::vector<Vaisseau*>  init();
	void ajouterVaisseau(Vaisseau* vaisseau);

	string to_string();
};

