#include <iostream>
#include "Heros.h"
#include "Creature.h"
#include <random>

using namespace std;

Heros::Heros(string nom, int pv, int pas1, int pas2, int pas3, int nbpot, int pvmax) {
    this->nom = nom;

    this->pv = pv;

    this->pas1 = pas1;

    this->pas2 = pas2;

    this->pas3 = pas3;

    this->nbpot = nbpot;

    this->pvmax = pvmax;

}

void Heros::affiche()
{
    cout << "Je suis le hero :" << endl;
    cout << "Mon nom est " << nom << endl;
    cout << "J'ai " << pv << " point de vie" << endl;
    cout << "J'ai " << pas1 << " point d'attaque" << endl;
    cout << "//////////////////////////////" << endl;
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

void Heros::subitDegat(int degat)
{
    pv -= degat;
}

int Heros::getpa()
{
    return this->pas1;
}

int Heros::getpv()
{
    return this->pv;
}

int Heros::getnbpot()
{
    return this->nbpot;
}

int Heros::setpv(int p)
{
    pv = p;
}