#pragma once
#include <string>

using namespace std;

class Entite {
public:
    Entite(string nom, int pv);

    virtual void affiche();
    virtual void subitDegat(int degat);
    virtual int getpv();

private:
    string nom;
    int pv;
};
