#include "Monstre.cpp"
#include "Monstre.h"
#include "Mage.cpp"
#include "Mage.h"
#include <iostream>
#include <string>


int main(){

    // exo 1 //
    Monstre Monstre1 =Monstre("Monstre1",15,10);
    Monstre Monstre2=Monstre("Monstre2",10,5);

    Monstre1.afficherMonstre();
    Monstre2.afficheMonstre();

    monstre1.attaque(Monstre2);

    // exo 2 //
    Mage Mage1=Mage("Mage1",100,1);
    Mage Mage2=Mage("Mage2",100,2);

    Mage1.afficheMage();
    Mage2.afficheMage();

    Mage.jouerMonstre();
}