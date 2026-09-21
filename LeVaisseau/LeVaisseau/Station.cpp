#include "Station.h"
#include "FactoryVaisseau.h"

Station::Station()
{
	platiniumDisponible = 1000;
	vieStation = 100;
}

Station::~Station(){}


std::vector<Vaisseau*> Station::getVaisseauDispo()
{
	return vecVaisseau;
}

void Station::ajouterVaisseau(Vaisseau* vaisseau)
{
	vecVaisseau.push_back(vaisseau);
}
std::vector<Vaisseau*> Station::init()
{
	for (int i = 0; i < 3; i++)
	{
		vecVaisseau.push_back(FactoryVaisseau::getRandomVaisseau());
	}
	return vecVaisseau;
}
string Station::to_string()
{
	string message = ("INFORMATION DE VOTRE STATION\n"
		"PLATINIUM DISPONIBLE : " + std::to_string(platiniumDisponible) + "\n"
		"VIE RESTANTE : " + std::to_string(vieStation) + "\n"
		"NOMBRE DE VAISSEAU DISPONIBLE : " + std::to_string(vecVaisseau.size()));

	return message;
}
