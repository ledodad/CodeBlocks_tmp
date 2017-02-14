#include <Arme.h>

using namespace std;

    Arme::Arme():m_nom("Épée rouillée"),m_degats(10)
    {

    }
    Arme::Arme(std::string nom, int degats):m_nom(nom),m_degats(degats)
    {

    }
    void changer(std::string nom, int degats)
    {
           m_nom = nom;
           m_degats = degats;
    }

    void afficher() const;
    {
       cout << "Arme : " << m_nom << " (Dégâts : " << m_degats << ")" << endl;
    }

};
