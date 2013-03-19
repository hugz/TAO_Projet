#ifndef MONDE_H
#define MONDE_H

#include<string>
#include<vector>
#include<map>
#include "Position.h"
#include "Element.h"
#include "Mobile.h"

using namespace std;

class Monde : public vector<Element *>
{
    private :
		map <Position, unsigned> Carte;

	public :
		Monde();
		const map <Position, unsigned> & getMap() const;
        void ajouterElement(Element & ele);
        bool isCaseEmpty(Position pPos);
        bool isParite(Position pPos);
		void afficher() const;

};

#endif
