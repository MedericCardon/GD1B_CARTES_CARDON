#include "Monstre.cpp"
#include "Monstre.h"
#include <iostream>
#include <string>


int main(){


    Monstre Monstre1 =Monstre("Monstre1",15,10);
    Monstre Monstre2=Monstre("Monstre2",10,5);

    Monstre1.afficherMonstre();
    Monstre2.afficheMonstre();

    monstre1.attaque(Monstre2);

    return 0;
}