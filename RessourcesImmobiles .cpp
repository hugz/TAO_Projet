#include "Element.h"
#include"Position.h"
#include "Ressources.h"
#include "RessourcesImmobiles.h"
#include<string>
#include<iostream>
//#include <RessourcesImmobiles.h>

RessourcesImmobiles::RessourcesImmobiles()
{}

RessourcesImmobiles::RessourcesImmobiles(const string pNom, const Position pPos, unsigned int pQte, Monde * pPmonde): Ressources(pNom,pPos,pQte,pPmonde)
{}

RessourcesImmobiles::RessourcesImmobiles(const string pNom, unsigned int pX, unsigned int pY, unsigned int pQte, Monde * pPmonde) : Ressources(pNom,pX,pY,pQte,pPmonde)
{}

void RessourcesImmobiles::agir(){
    seDeplacer(GiveRand(1,6));
}
