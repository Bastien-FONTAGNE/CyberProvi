#include "Personnage.h"
#include <string>
#include <iostream>
using namespace std;


Personnage::Personnage()
{

}

Personnage::Personnage(const string& nom)
{

}

bool Personnage::estVivant()
{
	return m_vie > 0;
}



void Personnage::recevoirDegats(int nbDegats)
{
	m_vie -= nbDegats;

	if (m_vie < 0)
	{
		m_vie = 0;
	}

	if (m_nom1 = !estVivant) 
	{
		cout << "Johnny Silverhand est mort!" << endl << endl;
	}

	if (m_nom2 = !estVivant)
	{
		cout << "Adam Smasher est mort!" << endl << endl;
	}
}

void Personnage::attaquer(Personnage& cible)
{

}



