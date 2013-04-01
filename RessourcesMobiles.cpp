
#include "Element.h"
#include"Position.h"
#include "Ressources.h"
#include "RessourcesMobiles.h"
#include<string>
#include<iostream>
/**
private :
         unsigned int Vision;
**/

RessourcesMobiles::RessourcesMobiles(): Vision(GiveRand(1,3))
{}

RessourcesMobiles::RessourcesMobiles(const string pNom, const Position pPos, Monde * pPmonde, unsigned int pQte): Element(pNom,pPos,pPmonde), Vision(GiveRand(1,3))
{
    setQte(pQte);
}

RessourcesMobiles::RessourcesMobiles(const string pNom, unsigned int pX, unsigned int pY, Monde * pPmonde, unsigned int pQte) : Element(pNom,pX,pY,pPmonde), Vision(GiveRand(1,3))
{
    setQte(pQte);
}

void RessourcesMobiles::agir(){
    seDeplacer(GiveRand(1,6));
}

unsigned int RessourcesMobiles::getVision()
{
    return Vision;
}
void RessourcesMobiles::setVision(unsigned int pVision)
{
    Vision=pVision;
}
