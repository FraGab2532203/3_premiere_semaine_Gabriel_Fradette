#include "FactionRouge.h"
FactionRouge::FactionRouge() :Faction(1, 1, 1, 1, "Les Rouge") {}
FactionRouge::~FactionRouge()
{

}
string FactionRouge::getNom()
{
	return Faction::getNom();
}

string FactionRouge::to_string()
{
	return Faction::to_string();
}
