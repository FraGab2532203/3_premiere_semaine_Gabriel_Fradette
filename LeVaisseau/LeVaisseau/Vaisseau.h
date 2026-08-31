#pragma once
#include <string>
using std::string;

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
public:
	Vaisseau(int attaque, int defense, int vie, int capacite, string nom, int niveau, int exp);
	~Vaisseau();


	int getAtt();
	int getDe();
	int getVie();

	virtual string to_string();
};


