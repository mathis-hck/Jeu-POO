#pragma once

using namespace std;

class Heros;

class Creature
{
public:

    void affiche();

    void subitDegat(int degat);

    void attaque(Heros &h);

    int getpa();

    int getpv();

    Creature(int pv, int pa, int niveau);

private:
    int pv;
    int pa;
    int niveau;
};