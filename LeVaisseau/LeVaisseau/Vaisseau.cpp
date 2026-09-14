#include "Vaisseau.h"
#include "Toilette.h"
Vaisseau::Vaisseau(int _attaque, int _defense, int _vie, int _capacite, string _nom, int _niveau, int _exp, Faction* _faction)
{
	attaque = _attaque;
	defense = _defense;
	vie = _vie;
	capacite = _capacite;
	nom = _nom;
	niveau = _niveau;
	exp = _exp;
	faction = _faction;
}
Vaisseau::Vaisseau(Faction* _faction)
{
	faction = _faction;
}

Vaisseau::~Vaisseau(){}

int Vaisseau::getAtt()
{
	return attaque;
}

int Vaisseau::getDe()
{
	return defense;
}

int Vaisseau::getVie()
{
	return vie;
}

string Vaisseau::to_string()
{
	string message = ("Nom : " + nom + "\n"
		"attaque du vaisseau :" + std::to_string(attaque) + "\n"
		"defense du vaisseau : " + std::to_string(defense) + "\n"
		"vie du vaisseau : " + std::to_string(vie) + "\n"
		"capaciter du vaisseau : " + std::to_string(capacite) + "\n"
		"niveau du vaisseau : " + std::to_string(niveau) + "\n"
		"exp du vaisseau : " + std::to_string(exp) + "\n");
	
	return message;
}

