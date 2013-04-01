#include "Element.h"
#include "Position.h"
#include "Ressources.h"
#include "Random.h"
#include "Mobile.h"
#include "RessourcesImmobiles.h"
#include<string>
#include<iostream>

RessourcesImmobiles::RessourcesImmobiles()
{}

RessourcesImmobiles::RessourcesImmobiles(const string pNom, const Position pPos, Monde * pPmonde, unsigned int pQte): Element(pNom,pPos,pPmonde)
{
    setQte(pQte);
}

RessourcesImmobiles::RessourcesImmobiles(const string pNom, unsigned int pX, unsigned int pY, Monde * pPmonde, unsigned int pQte) : Element(pNom,pX,pY, pPmonde)
{
    setQte(pQte);
}

void RessourcesImmobiles::agir(){

}
