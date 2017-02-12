#ifndef PERSONNAGE_CPP_INCLUDED
#define PERSONNAGE_CPP_INCLUDED


#include <Personnage.h>
#include <string>

using namespace std;

    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &Cible);
    void boirPotionDeVie(int quantitePotion);
    void changerArme(string nomNouvelleArme, degatsArme);
    bool estVivant();

#endif // PERSONNAGE_CPP_INCLUDED
