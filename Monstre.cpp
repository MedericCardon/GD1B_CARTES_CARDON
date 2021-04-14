#ifndef CARTE_CPP
#define CARTE_CPP

#include "Monstre.h"
#include <iostream>


Monstre::Monstre(std::string nom, int scoreAtq, int pdv) : _nom(nom), _scoreAtq(scoreAtq), _pdv(pdv), _etat(true), _destroy(false){}

void Monstre::afficheMonstre(){
    std::cout << "-------------"<< std::endl;
    std::cout << "Carte Monstre"<< std::endl;
    std::cout << "Nom : " << _nom << std::endl;
    std::cout << "Points de vie : " << _pdv << std::endl;
    std::cout << "Dégâts d'attaque :" << _scoreAtq << std::endl;
    if(_etat == true){
        std:: cout << "Etat : Disponible" << std::endl;
    }
    else{
        std:: cout << "Etat : Epuisé" << std::endl;
    }
}

void Monstre::getAttaqueMonstre(){
    return _scoreAtq;
}

void Monstre::getPdv(){
    return _pdv;
}

void Monstre::setPdv(int pdvMonstre){
    _pdv = pdvMonstre;
}

void Monstre::setEtat(bool etatMonstre){
    _etat = etatMonstre;
}

void Monstre::setDestroy(bool destroyMonstre){
    _destroy = destroyMonstre;
}

void attaque(){
    monstre.setPdv(monstre.getPdv()-_scoreAtq);
    _pdv -= monstre.getAttaqueMonstre();
    if(monstre.getPdv() <= 0){
        monstre.setPdv(0);
    }
    if(_pdv == 0){
        _destroy = true;
    }
    _etat = false;
}



#endif