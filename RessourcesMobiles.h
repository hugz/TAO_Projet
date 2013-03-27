#ifndef RESSOURCESMOBILES_H
#define RESSOURCESMOBILES_H

#include<string>
#include<vector>
#include<map>
#include "Position.h"
#include "Ressources.h"
#include "Random.h"

using namespace std;

 class RessourcesMobiles : public Ressources, public Mobile
 {
     private :
         unsigned int Vision;

     public :

         RessourcesMobiles();
         RessourcesMobiles(const string pNom, const Position pPos, unsigned int pQte, Monde * pPmonde);
         RessourcesMobiles(const string pNom, unsigned int pX, unsigned int pY, unsigned int pQte, Monde * pPmonde);
         void agir();
         unsigned int getVision();
         void setVision(unsigned int pVision);

 };

 #endif
