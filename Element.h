#ifndef ELEMENT_H
#define ELEMENT_H

#include<string>
#include "Position.h"

using namespace std;

class Monde;
class Element
{
    private :
		string Nom;
		Position Pos;
		Monde * World;
		//Pour l'exemple, on ne prend que la position et le nom en attribut. On rajoutera les autres attributs plus tard.

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
#include "Monde.h"

#endif
