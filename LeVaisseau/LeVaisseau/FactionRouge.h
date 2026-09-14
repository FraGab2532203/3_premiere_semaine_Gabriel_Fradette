#pragma once
#include "Faction.h"

class FactionRouge : public Faction
{
public:
	FactionRouge();
	~FactionRouge();

	virtual string getNom();
	virtual string to_string();

};

