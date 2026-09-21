#pragma once

#include "EnumNiveau.h"
#include <string>
#include "Utilitaire.h"
using std::string;

class Quete
{
private:
	string nom;

	enumNiveau nivDifficulte;
	int nivMin;
	int recompenseOr;
	int expRecu;

public:
	Quete();
	~Quete();

	enumNiveau getDifficulte();
	int getNivMin();
	int getRecompenseOr();
	int getExp();

	virtual string to_string();
};

