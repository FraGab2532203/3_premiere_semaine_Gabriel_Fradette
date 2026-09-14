#include "FactoryVaisseau.h"

Vaisseau* FactoryVaisseau::getRandomVaisseau()
{
	Vaisseau* vaisseau(0);

	Faction* maFaction = getRandomFaction();

	TypeVaisseau typeV = (TypeVaisseau)Utilitaire::genererNb(1, 3);
	if (typeV == TypeVaisseau::Toilette)
		vaisseau = new Toilette(maFaction);
	else if (typeV == TypeVaisseau::Quincaillerie)
		vaisseau = new Quincaillerie(maFaction);
	else
		vaisseau = new Clandestin(maFaction);
	std::cout << maFaction->to_string();
	return vaisseau;
}
Faction* FactoryVaisseau::getRandomFaction()
{
	Faction* faction;
	int rdn = rand() % (2 - 1 + 1) + 1;
	if (rdn == 1)
		faction = new FactionRouge;
	else
		faction = new FactionBleu;
	return faction;
}
