#ifndef CARTE_CPP
#define CARTE_CPP

#include "Mage.h"
#include <iostream>


Mage::Mage(std::string nomMage, int Mage, int zoneDeJeu) : _nomMage(nomMage),  _pdvMage(pdvMage), _zoneDeJeu(zoneDeJeu){}

void Mage::afficheMage(){
    std::cout << "-------------"<< std::endl;
    std::cout << "Mage"<< std::endl;
    std::cout << "Nom : " << _nomMage << std::endl;
    std::cout << "Points de vie : " << _pdvMage << std::endl;
    std::cout << "Zone de jeu" << _zoneDeJeu << std::endl;
}

void Mage::afficheCarteZone(){
    return _zoneDeJeu;
}

void Mage::getPdvMage(){
    return _pdvMage;
}

void Mage::setPdvMage(int pdvMage){
    _pdvMage = pdvMage;
}

void Mage::JouerMonstre(){
    int nouveauMonstre;
    std::cout << " Tapez 1 pour choisir le monstre 1 ou alors 2 pour choisir le monstre 2."<<std::endl;
    std::cin >> nouveauMonstre;
    if (nouveauMonstre == 1){
        std::cout << "Monstre 1 :"<<std::endl;
        std::cout << "Points de vie : 20"<<std::endl;
    }
    if (nouveauMonstre == 2){
        std::cout << "Monstre 2 :"<<std::endl;
        std::cout << "Points de vie : 30"<<std::endl;
    }

}



#endif