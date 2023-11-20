#pragma once
#include "Entite.h"

using namespace std;

class Heros;

class Creature : public Entite
{
public:
    void affiche() override;
    void subitDegat(int degat) override;
    int getpv() override;
    int getpa();
    void attaque(Heros &h);

    Creature(string nom, int pv, int pa, int niveau);

private:
    string nom;
    int pv;
    int pa;
    int niveau;
};