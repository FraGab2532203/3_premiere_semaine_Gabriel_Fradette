#include "Clandestin.h"

Clandestin::Clandestin(Faction* _faction):Vaisseau(1, 11, 4, 5, "Vaisseau Clandestin", 1, 100,_faction) {}
Clandestin::~Clandestin()
{

}
string Clandestin::to_string()
{
	return Vaisseau::to_string();
}