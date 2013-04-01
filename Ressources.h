#ifndef RESSOURCES_H
#define RESSOURCES_H

#include<string>
#include "Element.h"
#include "Position.h"

using namespace std;

class Ressources : public virtual Element
{
    private :
		unsigned int qteRes;

	public :
		Ressources();
		Ressources(const string pNom, const Position pPos, Monde * pmonde, unsigned int pQte);
		Ressources(const string pNom, unsigned int pX, unsigned int pY, Monde * pmonde, unsigned int pQte);
		void setQte(unsigned int pQte);
        unsigned int getQte();
        void afficher() const;
};

#endif
