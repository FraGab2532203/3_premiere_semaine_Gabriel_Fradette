#include "Quincaillerie.h"

Quincaillerie::Quincaillerie(Faction* _faction) :Vaisseau(1, 11, 4, 5, "Vaisseau Quincaillerie", 1, 100,_faction) {}
Quincaillerie::~Quincaillerie()
{

}
string Quincaillerie::to_string()
{
	return Vaisseau::to_string();
}
