#pragma once
#include "Vaisseau.h"

class Clandestin:public Vaisseau
{
public:
	Clandestin();
	~Clandestin();

	virtual string to_string();

};

