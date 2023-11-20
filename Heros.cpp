#include <iostream>
#include "Heros.h"
#include "Creature.h"
#include <random>
#include <string.h>
#include "Entite.h"

using namespace std;

Heros::Heros(string nom, int pv, int pas1, int pas2, int pas3, int nbpot, int pvmax)
    : Entite(nom,pv)
{
    this->pas1 = pas1;
    this->pas2 = pas2;
    this->pas3 = pas3;
    this->nbpot = nbpot;
    this->pvmax = pvmax;
}

void Heros::affiche()
{
    cout << "Je suis le hero" << endl;
    Entite::affiche();
}

void Heros::subitDegat(int degat)
{
    pv -= degat;
}

int Heros::getpv()
{
    Entite::getpv();
}

void Heros::Heal()
{
    if (pv+10>pvmax)
    {
        pv=pvmax;
        nbpot-=1;
    }
    else
    {
        pv+=10;
        nbpot-=1;
    }
}

void Heros::attaque1(Creature &c)
{
        c.subitDegat(pas1);
}

void Heros::attaque2(Creature &c)
{
    int pa1 = rand() % 3;
    if ( pa1 == 1)
    {
        c.subitDegat(pas2);
    }
    else
    {
        cout << "vous avez rate votre attaque " << endl;
    }
}

void Heros::attaque3(Creature &c)
{
    int pa1 = rand() % 6;
    if ( pa1 == 1)
    {
        c.subitDegat(pas3);
    }
    else
    {
        cout << "vous avez rate votre attaque " << endl;
    }
}

int Heros::getpa()
{
    return this->pas1;
}

int Heros::getnbpot()
{
    return this->nbpot;
}
