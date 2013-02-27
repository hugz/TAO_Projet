#ifndef ELEMENT_H
#define ELEMENT_H

#include<string>
#include "Position.h"

using namespace std;

class Element
{
    private :
		string Nom;
		Position Pos;
		//Pour l'exemple, on prend que la position et le nom. On rajoutera les autres attributs plus tard.

	public :
		Element();
		Element(const string pNom, const Position pPos);
		Element(const string pNom, unsigned int pX, unsigned int pY);
		void setNom(const string pNom);
		void setPos(const Position pPos);
		string getNom() const;
        Position getPos() const;
        void afficher() const;
};

#endif
