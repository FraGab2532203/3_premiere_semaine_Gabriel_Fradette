#pragma once

#include "Vaisseau.h"
class Toilette:public Vaisseau
{
public:
	Toilette(Faction* _faction);
	~Toilette();

	virtual string to_string();

};


