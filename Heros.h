#pragma once
#include "Creature.h"
#include "Entite.h"
#include <string>

using namespace std;

class Heros : public Entite
{
public:
    void affiche() override;
    void subitDegat(int degat) override;
    int getpv() override;
    int getpa();
    void Heal();
    void attaque1(Creature &c);
    void attaque2(Creature &c);
    void attaque3(Creature &c);
    int getnbpot();

    Heros(string nom, int pv, int pas1, int pas2, int pas3, int nbpot, int pvmax);

private:
    string nom;
    int pv;
    int nbpot;
    int pvmax;
    int pas1;
    int pas2;
    int pas3;
};
