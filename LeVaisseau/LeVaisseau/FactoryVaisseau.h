#pragma once
#include "Vaisseau.h"
#include "Faction.h"
#include "TypeVaisseau.h"
#include "Toilette.h"
#include "Clandestin.h"
#include "Quincaillerie.h"
#include "Utilitaire.h"
#include "FactionRouge.h"
#include "FactionBleu.h"
class FactoryVaisseau
{
public:
	static Vaisseau* getRandomVaisseau();

protected:
	static Faction* getRandomFaction();
};

