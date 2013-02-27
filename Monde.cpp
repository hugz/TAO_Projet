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

map <Position, unsigned> Monde::getMap() const
{
    return Carte;
}

void Monde::afficher() const
{
    cout<<"Vector : "<<endl;

    for (unsigned i=0 ; i< size() ; i++)
        at(i)->afficher();

    cout<<"Map : "<<endl;
    map<Position, unsigned int>::const_iterator Iter;

    for(Iter=getMap().begin(); Iter!=getMap().end() ; Iter++)
        cout<<Iter->first<<" "<<Iter->second<<endl;
}
