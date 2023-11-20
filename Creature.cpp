#include "Creature.h"
#include "Heros.h"
#include <iostream>
#include <random>
#include <string.h>

using namespace std;

Creature::Creature(string nom, int pv, int pa, int niveau)
    : Entite(nom,pv)
{
    Entite(nom,pv);
    this->pa = pa;
    this->niveau = niveau;
}

void Creature::affiche()
{
    cout << "Je suis le monstre" << endl;
    Entite::affiche();
}

void Creature::subitDegat(int degat)
{
    pv -= degat;
}

int Creature::getpv()
{
    Entite::getpv();

}

void Creature::attaque(Heros &h)
{
    int paa = rand() % pv/2 +1;
    h.subitDegat(paa);
}

int Creature::getpa()
{
    return this->pa;
}
