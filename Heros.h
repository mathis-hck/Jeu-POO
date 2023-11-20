#pragma once
#include "Creature.h"
#include <string>

using namespace std;

class Heros
{
public:
    void affiche();

    void subitDegat(int degat);

    void Heal();

    void attaque1(Creature &c);

    void attaque2(Creature &c);

    void attaque3(Creature &c);

    int getpa();

    int getpv();

    int getnbpot();

    int setpv(int p);

    Heros(string nom, int pv, int pas1, int pas2, int pas3, int nbpot, int pvmax);

private:

    string nom;
    int nbpot;
    int pv;
    int pvmax;
    int pas1;
    int pas2;
    int pas3;
};
