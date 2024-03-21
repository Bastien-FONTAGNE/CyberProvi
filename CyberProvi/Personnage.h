#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include "silverhand.h"
#include <iostream>
#include <string>

class Personnage {

public:
	Personnage();
	void setNom(const std::string& n);
	std::string getNom() const;

private:
	std::string nom;
};

#endif
