#pragma once
#include <string>
using std::string;
class Faction;
class Vaisseau
{
private:
	int attaque;
	int defense;
	int vie;
	int capacite;
	string nom;
	int niveau;
	int exp;
	Faction* faction;
public:
	Vaisseau(int attaque, int defense, int vie, int capacite, string nom, int niveau, int exp, Faction* faction);
	Vaisseau(Faction* _faction);

	~Vaisseau();


	int getAtt();
	int getDe();
	int getVie();

	virtual string to_string();
};


