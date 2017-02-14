#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include <string>

class Personnage

{
public:

    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirPotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, degatsArme);
    bool estVivant();

private:
    int m_vie;
    int m_mana;
    std::string m_nomArme;
    int m_degatsArme;

};


#endif // PERSONNAGE_H_INCLUDED
