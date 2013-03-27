#ifndef RESSOURCESIMMOBILES_H
#define RESSOURCESIMMOBILES_H

#include<string>
#include<vector>
#include<map>
#include "Position.h"
#include "Ressources.h"

using namespace std;

 class RessourcesImmobiles : public Ressources, public Mobile
 {
     private :
         RessourcesImmobiles();
         RessourcesImmobiles(const string pNom, const Position pPos, unsigned int pQte, Monde * pPmonde);
         RessourcesImmobiles(const string pNom, unsigned int pX, unsigned int pY, unsigned int pQte, Monde * pPmonde);
     public :
          void agir();

 };

 #endif
