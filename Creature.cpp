#include "Creature.h"
#include "Heros.h"
#include <iostream>
#include <random>

using namespace std;

Creature::Creature(int pv, int pa, int niveau) {
    this->pv = pv;

    this->pa = pa;

    this->niveau = niveau;

}

void Creature::affiche()
{
    cout << "Arghghgh je suis le monstre :" << endl;
    cout << "Je suis niveau " << niveau << endl;
    cout << "J'ai " << pv << " point de vie" << endl;
    cout << "J'ai " << pa << " point d'attaque" << endl;
    cout << "//////////////////////////////" << endl;
}

void Creature::subitDegat(int degat)
{
    pv -= degat;
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

int Creature::getpv()
{
    return this->pv;
}