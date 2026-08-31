#include "Quincaillerie.h"

Quincaillerie::Quincaillerie() :Vaisseau(1, 11, 4, 5, "Vaisseau Quincaillerie", 1, 100) {}
Quincaillerie::~Quincaillerie()
{

}
string Quincaillerie::to_string()
{
	return Vaisseau::to_string();
}
