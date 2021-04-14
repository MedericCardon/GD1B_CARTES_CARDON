#ifndef CARTE_H
#define CARTE_H

#include <string>
#include <vector>

class Mage{

    private:

        std::string _nomMage;
        int _zoneDeJeu;
        int _pdvMage;
        
        
    public:
     
        void afficheMage();

        void afficheCarteZone();

        void getPdv();

        void setPdv(int pdvMage);

        void JouerMonstre();

        
        Mage();
        Mage(std::string nomMage,int pdvMage, int zoneDeJeu);
        
};

#endif