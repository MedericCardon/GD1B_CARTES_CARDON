#ifndef CARTE_H
#define CARTE_H

#include <string>
#include <vector>

class Monstre{

    private:

        std::string _nom;
        int _scoreAtq;
        int _pdv;
        bool _etat;
        bool _destroy;
        
        
    public:
     
        void afficheMonstre();

        void getAttaqueMonstre();

        void getPdv();

        void setPdv(int pdvMonstre);

        void setEtat(bool etatMonstre);

        void setDestroy(bool destroyMonstre);

        void attaque (Monstre monstre);

        
        Monstre();
        Monstre(std::string nom,int pdv,int scoreAtq);
        
};

#endif