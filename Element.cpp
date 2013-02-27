#include "Element.h"
#include"Position.h"
#include<string>

using namespace std;

Element::Element()
{
}

Element::Element(const string pNom, const Position pPos): Nom(pNom), Position(pPos)
{
}

Element::Element(const string pNom, unsigned int pX, unsigned int pY): Nom(pNom), Position(pX, pY)
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

Position Position::getPosX() const
{
    return Pos;
}
