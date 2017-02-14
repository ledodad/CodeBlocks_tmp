#ifndef PERSONNAGE_CPP_INCLUDED
#define PERSONNAGE_CPP_INCLUDED


#include <Personnage.h>
#include <string>

using namespace std;

    void recevoirDegats(int nbDegats)
    {
        m_vie-=nbDegats;

        if (m_vie<0)
        {
            m_vie=0;
        }

    }
    void attaquer(Personnage &cible)
    {
        cible.recevoirDegats(m_degatsArme);
    }

    void boirPotionDeVie(int quantitePotion)
    void changerArme(string nomNouvelleArme, degatsArme)
    bool estVivant()

#endif // PERSONNAGE_CPP_INCLUDED
