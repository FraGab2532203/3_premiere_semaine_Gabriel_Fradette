#include "FactionBleu.h"
FactionBleu::FactionBleu() :Faction(1,1,1,1,"Les bleu") {}
FactionBleu::~FactionBleu()
{

}
string FactionBleu::getNom()
{
	return Faction::getNom();
}
string FactionBleu::to_string()
{
	return Faction::to_string();
}
