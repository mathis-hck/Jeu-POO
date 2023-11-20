#include <iostream>
#include "Heros.h"
#include "Creature.h"

int main()
{
    int spell;
    char answer;
    Heros her1("toto", 50, 5, 20, 30, 3,50);
    Creature crea1(50, 15, 10);
    her1.affiche();
    crea1.affiche();
    while(her1.getpv()>=0 && crea1.getpv()>=0)
    {
        cout << "Quelle attaque voulez vous utiliser ?";
        cin >> spell;
        if (spell==1){
            her1.attaque1(crea1);
        }
        else if (spell==2){
            her1.attaque2(crea1);
        }
        else if (spell==3){
            her1.attaque3(crea1);
        }
        crea1.attaque(her1);
        her1.affiche();
        crea1.affiche();
        cout << "Voulez vous utiliser une potion ? elle vous rendra 10 pv";
        cin >> answer;
        if (answer == 'y' && her1.getnbpot()>0)
        {
            her1.Heal();
        }
        else if(her1.getnbpot()==0)
        {
            cout << "Vous n'avez plus de potion" << endl;
        }
    }
}