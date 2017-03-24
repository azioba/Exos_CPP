// Grading Program.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>




int main()
{
	std::cout << "Welcome to this survey " <<std::endl;
	std::cout << "Enter the number of pancakes eaten by each person :" << std::endl;
	
	// Créons un tableau de vecteurs pour contenir les données
	std::vector<int>person;
	int pancakes;
	int temp = 0;
	for (int i = 0; i < 10; i++) // On rempli le tableau du nombre de pancakes mangés par les personnes
	{	
			std::cout << " person . " << i+1 << " : "; // personne "n" 
			std::cin >> pancakes;                      // a mangé tel nombre de pancakes
			person.push_back(pancakes);                // on ajoute une case au tableau
	}
	for (int i = 0; i < (int)person.size(); i++)       // boucle qui affiche le nombre de pancakes mangé par chaque personne
		std::cout << "person ." << i+1 << " ate " << person.at(i) << " pancakes " << std::endl;

	std::cout << "the biggest glutton is person  " << std::max_element(person.begin(), person.end()) - person.begin() +1 << std::endl; // la personne qui a mangé le plus de pancakes
	std::cout << "the least glutton is person  " << std::min_element(person.begin(), person.end()) - person.begin() +1 << std::endl; // la personne qui a mangé le moins de pancakes

	// algrithm de rangments des personnes en fonction du nombre de pancakes mangés
	std::sort(person.begin(), person.end());
	for (std::vector<int>::iterator it = person.begin(); it != person.end(); ++it)
		std::cout << " person ." << it - person.begin() +1 << " ate " << *it << " pancakes " << std::endl;

	
	

    return 0;
}

