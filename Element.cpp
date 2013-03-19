#include "Element.h"
#include "Position.h"
#include<string>
#include<iostream>

using namespace std;

Element::Element()
{
}

Element::Element(const string pNom, const Position pPos): Nom(pNom), Pos(pPos)
{
}

Element::Element(const string pNom, unsigned int pX, unsigned int pY): Nom(pNom), Pos(pX, pY)
{
}

void Element::setNom(const string pNom)
{
    Nom = pNom;
}

void Element::setPos(Position pPos)
{
    Pos = pPos;
}

string Element::getNom() const
{
    return Nom;
}

Position Element::getPos() const
{
    return Pos;
}

void Element::afficher() const
{
    cout<<"Nom de l'element : "<<Nom<<"\nPosition en X : "<<Pos.getPosX()<<", Position en Y : "<<Pos.getPosY()<<"\n\n";
}

/*classe element polymorphe*/
void Element::agir(){

}
