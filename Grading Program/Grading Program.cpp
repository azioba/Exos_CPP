// Grading Program.cpp�: d�finit le point d'entr�e pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>




int main()
{
	std::cout << "Welcome to this survey " <<std::endl;
	std::cout << "Enter the number of pancakes eaten by each person :" << std::endl;
	
	// Cr�ons un tableau de vecteurs pour contenir les donn�es
	std::vector<int>person;
	int pancakes;
	int temp = 0;
	for (int i = 0; i < 10; i++) // On rempli le tableau du nombre de pancakes mang�s par les personnes
	{	
			std::cout << " person . " << i+1 << " : "; // personne "n" 
			std::cin >> pancakes;                      // a mang� tel nombre de pancakes
			person.push_back(pancakes);                // on ajoute une case au tableau
	}
	for (int i = 0; i < (int)person.size(); i++)       // boucle qui affiche le nombre de pancakes mang� par chaque personne
		std::cout << "person ." << i+1 << " ate " << person.at(i) << " pancakes " << std::endl;

	std::cout << "the biggest glutton is person  " << std::max_element(person.begin(), person.end()) - person.begin() +1 << std::endl; // la personne qui a mang� le plus de pancakes
	std::cout << "the least glutton is person  " << std::min_element(person.begin(), person.end()) - person.begin() +1 << std::endl; // la personne qui a mang� le moins de pancakes

	// algrithm de rangments des personnes en fonction du nombre de pancakes mang�s
	std::sort(person.begin(), person.end());
	for (std::vector<int>::iterator it = person.begin(); it != person.end(); ++it)
		std::cout << " person ." << it - person.begin() +1 << " ate " << *it << " pancakes " << std::endl;

	
	

    return 0;
}

