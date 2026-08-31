#pragma once

#include "Vaisseau.h"
class Toilette:public Vaisseau
{
public:
	Toilette();
	~Toilette();

	virtual string to_string();

};


