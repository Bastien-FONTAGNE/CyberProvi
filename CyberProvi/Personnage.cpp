#include "Personnage.h"
#include <string>
#include <iostream>
using namespace std;


Personnage::Personnage()
{

}

void Personnage::setNom(const std::string& n)
{
	nom = n;
}

std::string Personnage::getNom() const
{
	return nom;
}




