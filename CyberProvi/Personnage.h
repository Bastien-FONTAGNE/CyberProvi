#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

class Personnage {

public:

	Personnage(int m_vie = 100, int m_ram);
	bool estVivant();
	void recevoirDegats(int nbDegats);
	void attaquer(Personnage &cible);
	

private:
	int m_vie;
	int m_ram;
	std::string m_nom1;
	std::string m_nom2;
};

#endif
