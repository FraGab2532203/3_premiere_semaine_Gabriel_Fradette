#pragma once
#include "Vaisseau.h"

class Clandestin:public Vaisseau
{
public:
	Clandestin(Faction* _faction);
	~Clandestin();

	virtual string to_string();

};

