#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

class Personnage {

public:
	Personnage();
	Personnage(const string& nom);
	std::string getNom() const;

private:
	std::string m_nom;
};

#endif
