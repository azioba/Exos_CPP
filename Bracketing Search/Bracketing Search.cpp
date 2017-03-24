// Bracketing Search.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include<iostream>
#include<cstdlib>
#include<ctime>


int main()
{
	int iSecret, iGuess;
	//initialisation du seed aleatoire:
	srand(time(NULL));

	//generation d'un nombre secret entre 1 et 100:
	iSecret = rand() % 100 + 1;

	// boucle pour demander de deviner le nombre secret:
	do
	{
		std::cout << "Quelle est le nombre secret entre 1 et 100 ? :";
		std::cin >> iGuess;
		if (iSecret < iGuess) { std::cout << "Non, il est plus petit"; }
		else if (iSecret>iGuess) { std::cout << "Non, il est plus grand"; }
	} while (iSecret!=iGuess);

	std::cout << "Bravo" << std::endl;


    return 0;
}

