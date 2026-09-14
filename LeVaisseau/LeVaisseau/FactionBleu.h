#pragma once
#include "Faction.h"
class FactionBleu : public Faction
{
public:
	FactionBleu();
	~FactionBleu();

	virtual string getNom();

	virtual string to_string();

};

