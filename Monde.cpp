#include<string>
#include<vector>
#include<map>
#include <iostream>
#include "Position.h"
#include "Element.h"
#include "Monde.h"

using namespace std;

Monde::Monde()
{
    Position pos(1, 3);
    Element * elt = new Element("Toto", pos);

    push_back(elt);

    Carte.insert(pair<Position, unsigned>(pos, size()-1));
}

const map <Position, unsigned> & Monde::getMap() const
{
    return Carte;
}

void Monde::ajouterElement(Element & ele)
{
    push_back(&ele);
    //Carte.insert(pair<Position, unsigned>(pos, size()-1));
}

bool Monde::isCaseEmpty(Position pPos)
{
    map<Position, unsigned int>::const_iterator Iter;
    for(Iter=getMap().begin(); Iter!=getMap().end() ; Iter++)
    {
        return!(Iter->first.getPosX()==pPos.getPosX() && Iter->first.getPosY()==pPos.getPosY());
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
