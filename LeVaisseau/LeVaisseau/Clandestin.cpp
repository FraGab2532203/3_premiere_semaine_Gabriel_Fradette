#include "Clandestin.h"

Clandestin::Clandestin():Vaisseau(1, 11, 4, 5, "Vaisseau Clandestin", 1, 100) {}
Clandestin::~Clandestin()
{

}
string Clandestin::to_string()
{
	return Vaisseau::to_string();
}