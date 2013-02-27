#ifndef MONDE_H
#define MONDE_H

#include<string>
#include<vector>
#include<map>
#include "Position.h"
#include "Element.h"

using namespace std;

class Monde : public vector<Element *>
{
    private :
		map <Position, unsigned> Carte;

	public :
		Monde();
		void afficher() const;
};

#endif
