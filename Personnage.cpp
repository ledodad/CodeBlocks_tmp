#ifndef PERSONNAGE_CPP_INCLUDED
#define PERSONNAGE_CPP_INCLUDED


#include <Personnage.h>
#include <string>

using namespace std;

    Personnage::Personnage()
    {
         m_vie = 100;
         m_mana = 100;
         m_nomArme = "Épée rouillée";
         m_degatsArme = 10;
    }

    void Personnage::recevoirDegats(int nbDegats)
    {
        m_vie-=nbDegats;

        if (m_vie<0)
        {
            m_vie=0;
        }

    }
    void Personnage::attaquer(Personnage &cible)
    {
        cible.recevoirDegats(m_degatsArme);
    }

    void Personnage::boirPotionDeVie(int quantitePotion)
    {
         m_vie+=quantitePotion;

        if (m_vie>100)
        {
            m_vie=100;
        }
    }

    void Personnage::changerArme(string nomNouvelleArme, int degatsArme)
    {
        m_nomArme=nomNouvelleArme;
        m_degatsArme=degatsArme;
    }
    bool Personnage::estVivant(true)
    {
        return m_vie > 0;
    }

#endif // PERSONNAGE_CPP_INCLUDED
