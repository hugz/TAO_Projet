
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

RessourcesMobiles::RessourcesMobiles(const string pNom, const Position pPos, unsigned int pQte, Monde * pPmonde): Ressources(pNom,pPos,pQte,pPmonde), Vision(GiveRand(1,3))
{}

RessourcesMobiles::RessourcesMobiles(const string pNom, unsigned int pX, unsigned int pY, unsigned int pQte, Monde * pPmonde) :Ressources(pNom,pX,pY,pQte,pPmonde),Vision(GiveRand(1,3))
{}

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
