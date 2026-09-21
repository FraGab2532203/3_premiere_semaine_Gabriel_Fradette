// LeVaisseau.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <ctime>
#include "Vaisseau.h"
#include "Toilette.h"
#include "Clandestin.h"
#include "Quincaillerie.h"
#include "FactoryVaisseau.h"
#include "Station.h"


int main()
{
	int banque = 67000;
	using namespace std;
	srand(time(nullptr));
	cout << R"(

        ____/____________________________________________________________________________________________________________________________________________________\____
   ____/                                                                                                                                                            \___
__/                                                                                                                                                                    \__
\____        ___/\___      ___/\___      ___/\___      ___/\___      ___/\___      ___/\___      ___/\___      ___/\___      ___/\___      ___/\___      ___________/
     \_______/       \____/       \____/       \____/       \____/       \____/       \____/       \____/       \____/       \____/       \____/
             \______________________________________________________________________________________________________________________________________________________/
              |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
              |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|
                    \________________________________________________________________________________________________________________/
                     \      ___       ___       ___       ___       ___       ___       ___       ___       ___       ___       ___   /
______________________\_____/   \_____/   \_____/   \_____/   \_____/   \_____/   \_____/   \_____/   \_____/   \_____/   \_____/___/____________________
\                                                                                                                                                             /
 \___________________________________________________________________________________________________________________________________________________________/
        \___________        \___________        \___________        \___________        \___________        \___________        \___________
                    \_______/           \_______/           \_______/           \_______/           \_______/           \_______/           \________________
                             ||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||     ||
_____________________________||_____||_____||_____||_____||_____||_____||_____||_____||_____||_____||_____||_____||_____||_______________________________
\                                                                                                                                                            /
 \__________________________________________________________________________________________________________________________________________________________/

)";
	int choix = 0;
	int choixVaisseau = 0;
	Station station;
	std::vector<Vaisseau*> vecVaisseau;
	vecVaisseau = station.init();

	std::vector<Vaisseau*> vaisseauAchete;

	while (choix != 5)
	{
		std::cout << "Banque : " + std::to_string(banque) + "\n";

		cout << "\n1 - Voir les information de la station\n";
		cout << "2 - Voir la liste des vaisseaux disponibles dans la station\n";
		cout << "3 - Acheter un vaisseau\n";
		cout << "4 - Afficher vaisseau acheté\n";
		cin >> choix;
		if (choix == 1)
			std::cout << station.to_string();
		else if (choix == 2)
			for (int i = 0; i < 3; i++)
			{
				std::cout << vecVaisseau[i]->to_string() + "\n";
			}
		else if (choix == 3)
		{
			cout << "quelle vaisseau voulez-vous achteté ? \n";
			cin >> choixVaisseau;

			vaisseauAchete.push_back(vecVaisseau[choixVaisseau+1]);
			banque = banque - 1000;
		}
		else
		{
			for (int i = 0; i < vaisseauAchete.size(); i++)
			{
				std::cout << vaisseauAchete[i]->to_string() + "\n";
			}
		}

	}

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
