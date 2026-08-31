#include "Toilette.h"
Toilette::Toilette():Vaisseau(1,10,4,5,"Vaisseau toilette",1,100){}
Toilette::~Toilette() 
{

}
string Toilette::to_string()
{
	return Vaisseau::to_string();
}
