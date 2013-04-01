/*    private :
		unsigned int qteRes;

	public :
		Ressources();
		Ressources(const string pNom, const Position pPos, unsigned int pQte);
		Ressources(const string pNom, unsigned int pX, unsigned int pY, unsigned int pQte);
		void setQte(unsigned int pQte);
        unsigned int getQte();
        void afficher() const;*/

#include "Element.h"
#include"Position.h"
#include "Ressources.h"
#include<string>
#include<iostream>

using namespace std;

Ressources::Ressources(): qteRes(0)
{
}

Ressources::Ressources(const string pNom, const Position pPos, Monde * pPmonde, unsigned int pQte) : Element(pNom, pPos, pPmonde), qteRes(pQte)
{
}

Ressources::Ressources(const string pNom, unsigned int pX, unsigned int pY, Monde * pPmonde, unsigned int pQte) : Element(pNom, Position(pX, pY), pPmonde), qteRes(pQte)
{
}

void Ressources::setQte(unsigned int pQte)
{
    qteRes = pQte;
}

unsigned int Ressources::getQte()
{
    return qteRes;
}

void Ressources::afficher() const
{
   // cout<<"Nom de l'element : "<<Nom<<"\nPosition en X : "<<Pos.getPosX()<<", Position en Y : "<<Pos.getPosY()<<"\n\n";
}
