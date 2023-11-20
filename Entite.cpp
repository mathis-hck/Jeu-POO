#include "Entite.h"
#include <iostream>
#include <string>

using namespace std;

Entite::Entite(string nom, int pv)
{
    this->nom = nom;
    this->pv = pv;
}

void Entite::affiche()
{
    cout << "Je suis " << nom << endl;
    cout << "J'ai " << pv << " point de vie" << endl;
    cout << "//////////////////////////////" << endl;
}

void Entite::subitDegat(int degat)
{
    pv -= degat;
}

int Entite::getpv()
{
    return this->pv;
}