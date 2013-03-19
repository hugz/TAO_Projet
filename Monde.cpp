#include<string>
#include<vector>
#include<map>
#include <iostream>
#include "Position.h"
#include "Element.h"
#include "Monde.h"
#include "Mobile.h"

using namespace std;

Monde::Monde()
{
}

const map <Position, unsigned> & Monde::getMap() const
{
    return Carte;
}

void Monde::ajouterElement(Element & ele)
{
    if(isCaseEmpty(ele.getPos()))
    {
        if(isParite(ele.getPos()))
        {
            push_back(&ele);
            Carte.insert(pair<Position, unsigned>(ele.getPos(), size()-1));
        }
        else
        {
            cout<<"Parite de la position non respecté\n";
        }
    }
    else
    {
        cout<<"Case non vide\n";
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

Mobile Monde::getElementMobile(Position pPos) const
{
    /*peut etre utiliser getMap().find(pos4) pour trouver le Mobile*/
    return Mobile();
}
