#include "Toilette.h"
Toilette::Toilette(Faction* _faction):Vaisseau(1,10,4,5,"Vaisseau toilette",1,100, _faction){}
Toilette::~Toilette() 
{

}
string Toilette::to_string()
{
	return Vaisseau::to_string();
}
