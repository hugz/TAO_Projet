#ifndef RESSOURCESIMMOBILES_H
#define RESSOURCESIMMOBILES_H

#include<string>
#include<vector>
#include<map>
#include "Position.h"
#include "Ressources.h"

using namespace std;

 class RessourcesImmobiles : public Ressources
 {
     private :

     public :
         RessourcesImmobiles();
         RessourcesImmobiles(const string pNom, const Position pPos, Monde * pPmonde, unsigned int pQte);
         RessourcesImmobiles(const string pNom, unsigned int pX, unsigned int pY, Monde * pPmonde, unsigned int pQte);
          void agir();

 };

 #endif
