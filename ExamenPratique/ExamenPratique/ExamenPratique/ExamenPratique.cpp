
#include <iostream>
#include "Quete.h"
#include <ctime>
#include "FactoryQuete.h"
#include <vector>
#include "Aventurier.h"


int main()
{
	srand(time(nullptr));
	Quete* quete;
	Aventurier aventurier(1);
	int choix = 0;

	while (choix != 3)
	{
		quete = FactoryQuete::getrandomQuete();
		std::cout << "Choisir votre action \n";
		std::cout << "1. Afficher les quêtes \n";
		std::cout << "2. Ajouter une quête \n";
		std::cin >> choix;

		if (choix == 1)
		{
			aventurier.afficherQuete();
		}
		else
		{
			for (int i = 0; i < 10; i++)
			{
				quete = FactoryQuete::getrandomQuete();
				aventurier.ajouterQuete(quete);
			}

		}
	}
}

