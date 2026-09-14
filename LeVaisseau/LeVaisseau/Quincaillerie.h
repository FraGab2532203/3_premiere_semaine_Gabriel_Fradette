#pragma once
#include "Vaisseau.h"

class Quincaillerie :public Vaisseau
{
public:
	Quincaillerie(Faction* _faction);
	~Quincaillerie();

	virtual string to_string();

};

