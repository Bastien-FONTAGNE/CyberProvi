#include "Personnage.h"
#include "Silverhand.h"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <conio.h>

using namespace std;

void afficherEcranLancement(int duree) {

    std::cout << "Militech ©" << endl;
    std::cout << "Chargement en cours...\n";
    std::cout << "[";

    for (int i = 0; i < 50; ++i) {
        std::cout << "=";
        std::this_thread::sleep_for(std::chrono::milliseconds(duree / 50));
    }

    std::cout << "] 100% Termine!\n";

    cout << "Bienvenue à Night City" << endl;
    cout << "Appuyez sur une touche pour lancer le chargement..." << endl;
    
    _getch();
}

void afficherEcranChargement(int duree) {

    std::cout << "Connection au sous-reseau d'Arasaka corp. ...\n";
    std::cout << "[";

    for (int i = 0; i < 50; ++i) {
        std::cout << "=";
        std::this_thread::sleep_for(std::chrono::milliseconds(duree / 50));
    }

    std::cout << "] 100% Termine!\n";

    std::cout << "Acces au dossier tueurdames/construct...\n";
    std::cout << "[";

    for (int i = 0; i < 50; ++i) {
        std::cout << "=";
        std::this_thread::sleep_for(std::chrono::milliseconds(duree / 50));
    }

    std::cout << "] 100% Terminé!\n";

    std::cout << "Recherche de construct de personnalite...\n";
    std::cout << "[";

    for (int i = 0; i < 50; ++i) {
        std::cout << "=";
        std::this_thread::sleep_for(std::chrono::milliseconds(duree / 50));
    }

    std::cout << "] 100% Termine, constructs trouvee affichage de la liste!\n" << endl << endl;
}

void afficherMenu() {
    std::cout << "Actions disponibles :" << std::endl;
    std::cout << "1. Utiliser arme" << std::endl;
    std::cout << "2. Utiliser piratage" << std::endl;
    std::cout << "3. Biomontieur(+20PV)" << std::endl;
    std::cout << "4. Overclocking(+20RAM)" << std::endl;
    std::cout << "5. Quitter le jeu" << std::endl;
    std::cout << "Choisissez une action : ";
}

void afficherPersonnage() {
    std::cout << "1.Johnny Silverhand" << std::endl << endl;
    std::cout << "2.Adam Smasher" << std::endl << endl;
}

int main()
{

    int dureeChargement = 3000;
    Personnage joueur1, joueur2;

    afficherEcranLancement(dureeChargement);
    afficherEcranChargement(dureeChargement);

    afficherPersonnage();



    cout << "Joueur 1, veuillez choisir votre personnage" << endl << endl;
     
}

