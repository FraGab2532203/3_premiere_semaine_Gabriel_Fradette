#include "Aventurier.h"
Aventurier::Aventurier(int _niv)
{
	niveau = _niv;

}

Aventurier::~Aventurier()
{

}


void Aventurier::afficherQuete()
{

	for (int i = 0; i < tabQuete.size(); i++)
	{
		std::cout << tabQuete[i]->to_string() + "\n";
	}
}

void Aventurier::ajouterQuete(Quete* quete)
{
	if (quete->getNivMin() <= niveau)
		tabQuete.push_back(quete);
}

int Aventurier::getNiv()
{
	return niveau;
}
