#pragma once
#include "Vaisseau.h"

class Quincaillerie :public Vaisseau
{
public:
	Quincaillerie();
	~Quincaillerie();

	virtual string to_string();

};

