#include "Faction.h"
Faction::Faction(){}
Faction::Faction(int _attaque, int _defense, int _vie, int _capacite, string _nom)
{
	attaque = _attaque;
	defense = _defense;
	vie = _vie;
	capacite = _capacite;
	nom = _nom;
}
Faction::~Faction()
{

}

string Faction::getNom()
{
	return nom;
}

string Faction::to_string()
{
	string message = (nom+"\n");
	return message;
}