#include "Quete.h"

Quete::Quete()
{
	int aleatoire = Utilitaire::genererNb(1, 100);

	if (aleatoire <= 75)
	{
		nivDifficulte = enumNiveau::Facile;
		nivMin = Utilitaire::genererNb(1,10);
		recompenseOr = Utilitaire::genererNb(100, 1000);
		expRecu = Utilitaire::genererNb(100, 2000);
	}
	else if (aleatoire <= 90)
	{
		nivDifficulte = enumNiveau::Moyen;
		nivMin = Utilitaire::genererNb(10,25);
		recompenseOr = Utilitaire::genererNb(1000, 5000);
		expRecu = Utilitaire::genererNb(2000, 4000);
	}
	else if (aleatoire <= 100)
	{
		nivDifficulte = enumNiveau::Difficile;
		nivMin = Utilitaire::genererNb(25, 99);
		recompenseOr = Utilitaire::genererNb(5000, 35000);
		expRecu = Utilitaire::genererNb(4000, 14000);
	}
}

Quete::~Quete()
{

}

enumNiveau Quete::getDifficulte()
{
	return nivDifficulte;
}

int Quete::getExp()
{
	return expRecu;
}

int Quete::getNivMin()
{
	return nivMin;
}

int Quete::getRecompenseOr()
{
	return recompenseOr;
}

string Quete::to_string()
{
	string message = ("Exp recu : " + std::to_string(expRecu) + "\n"
		"niv minimum :" + std::to_string(nivMin) + "\n"
		"Recompense de la quete : " + std::to_string(recompenseOr) + "\n");

	return message;
}
