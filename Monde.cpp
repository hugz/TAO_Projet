#include<string>
#include<vector>
#include<map>
#include <iostream>
#include "Position.h"
#include "Element.h"
#include "Monde.h"
#include "Mobile.h"
#include "config.h"
#include "Random.h"
#include "Homme.h"
#include "Femme.h"
#include "RessourcesImmobiles.h"
#include "RessourcesMobiles.h"
using namespace std;

Monde::Monde()
{
}

const map <Position, unsigned> & Monde::getMap() const
{
    return Carte;
}

 map <Position, unsigned> & Monde::getMap()
{
    return Carte;
}

void Monde::ajouterElement(Element * ele)
{
    if(isCaseEmpty(ele->getPos()))
    {
        if(isParite(ele->getPos()))
        {
            push_back(ele);
            Carte.insert(pair<Position, unsigned>(ele->getPos(), size()-1));
        }
    }
}

bool Monde::isCaseEmpty(Position pPos)
{
    map<Position, unsigned int>::const_iterator Iter;

    if(Carte.find(pPos) == Carte.end())
    {
        return true;
    }

    return false;
}

bool Monde::isParite(Position pPos)
{
    if(pPos.getPosX() % 2 == pPos.getPosY() % 2)
    {
        return true;
    }

    return false;
}

void Monde::afficher() const
{
    cout<<"Vector : "<<endl;

    for (unsigned i=0 ; i< size() ; i++)
        at(i)->afficher();

    cout<<"Map : "<<endl;
    map<Position, unsigned int>::const_iterator Iter;

    for(Iter=getMap().begin(); Iter!=getMap().end() ; Iter++)
        cout<<Iter->first.getPosX()<<" "<<Iter->first.getPosY()<<" "<<Iter->second<<endl;
}
void Monde::inisialiserLeMonde()
{
    unsigned int nbCuresAjoute = 0;
    unsigned int nbBSAjoute = 0;
    unsigned int nbEntantAVAjoute = 0;
    unsigned int nbBilbleAjoute = 0;
    unsigned int i =0;

    ///AJOUT DES CURES
    for(i = 0; i < NB_CURES; i++)
    {
        Position pos = Position(GiveRand(TAILLE_MAP_MIN,TAILLE_MAP_MAX), GiveRand(TAILLE_MAP_MIN,TAILLE_MAP_MAX));
        while(!isParite(pos) || !isCaseEmpty(pos))
        {
            pos = Position(GiveRand(TAILLE_MAP_MIN,TAILLE_MAP_MAX), GiveRand(TAILLE_MAP_MIN,TAILLE_MAP_MAX));
        }
        Element *elem = dynamic_cast<Element *>(new Homme("C", pos ,this));
        ajouterElement(elem);
        nbCuresAjoute++;
    }
    cout<<"\n\n"<<nbCuresAjoute<<" CURES AJOUTE\n\n";

    //AJOUT DES BONNES SOEURS
    for(i = 0; i < NB_BONNES_S; i++)
    {
       Position pos = Position(GiveRand(TAILLE_MAP_MIN,TAILLE_MAP_MAX), GiveRand(TAILLE_MAP_MIN,TAILLE_MAP_MAX));
        while(!isParite(pos) || !isCaseEmpty(pos))
        {
            pos = Position(GiveRand(TAILLE_MAP_MIN,TAILLE_MAP_MAX), GiveRand(TAILLE_MAP_MIN,TAILLE_MAP_MAX));
        }
        Element *elem = dynamic_cast<Element *>(new Femme("BS", pos ,this));
        ajouterElement(elem);
        nbBSAjoute++;
    }
    cout<<"\n\n"<<nbBSAjoute<<" BONNE SOEURS AJOUTEE\n\n";

    //AJOUT DES RESS MOBILES
    for(i = 0;i<NB_ENFANTS_A_VIOLET;i++)
    {
        Position pos = Position(GiveRand(TAILLE_MAP_MIN,TAILLE_MAP_MAX), GiveRand(TAILLE_MAP_MIN,TAILLE_MAP_MAX));
        while(!isParite(pos) || !isCaseEmpty(pos))
        {
            pos = Position(GiveRand(TAILLE_MAP_MIN,TAILLE_MAP_MAX), GiveRand(TAILLE_MAP_MIN,TAILLE_MAP_MAX));
        }
        Element *elem = dynamic_cast<Element *>(new RessourcesMobiles("EV", pos ,this, GiveRand(NB_RESS_MIN,NB_RESS_MAX)));
        ajouterElement(elem);
        nbEntantAVAjoute++;
    }
    cout<<"\n\n"<<nbEntantAVAjoute<<" VICTIMES AJOUTE\n\n";

    //AJOUT DES RESS IMMOBILES
    for(i = 0;i<NB_BILBLES;i++)
    {
       Position pos = Position(GiveRand(TAILLE_MAP_MIN,TAILLE_MAP_MAX), GiveRand(TAILLE_MAP_MIN,TAILLE_MAP_MAX));
        while(!isParite(pos) || !isCaseEmpty(pos))
        {
            pos = Position(GiveRand(TAILLE_MAP_MIN,TAILLE_MAP_MAX), GiveRand(TAILLE_MAP_MIN,TAILLE_MAP_MAX));
        }
        // RessourcesImmobiles(const string pNom, const Position pPos, Monde * pPmonde, unsigned int pQte);
        Element *elem = dynamic_cast<Element *>(new RessourcesImmobiles("BI", pos, this, GiveRand(NB_RESS_MIN,NB_RESS_MAX)));
        ajouterElement(elem);
        nbBilbleAjoute++;
    }

    cout<<"\n\n"<<nbBilbleAjoute<<" BILBLES AJOUTE\n\n";
}
