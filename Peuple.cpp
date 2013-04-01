#include "Peuple.h"
unsigned int Peuple::nbEleH = 0;
unsigned int Peuple::nbEleF = 0;
unsigned int Peuple::nbEleE = 0;
unsigned int Peuple::qteResMob = 0;
unsigned int Peuple::qteResMobImo = 0;

Peuple::Peuple()
{}

 unsigned int Peuple::getNbEleH()
{
    return nbEleH;
}

 unsigned int Peuple::getNbEleF()
{
    return nbEleF;
}

 unsigned int Peuple::getNbEleE()
{
    return nbEleE;
}

 unsigned int Peuple::getQteResMob()
{
    return qteResMob;
}

 unsigned int Peuple::getQteResMobImo()
{
    return qteResMobImo;
}

void Peuple::addNbEleH()
{
    nbEleH++;
}

void Peuple::addNbEleF()
{
    nbEleF++;
}

void Peuple::addNbEleE()
{
    nbEleE++;
}

void Peuple::addQteResMob(unsigned int pQte)
{
    qteResMob = qteResMob + pQte;
}

void Peuple::addQteResMobImo(unsigned int pQte)
{
    qteResMobImo = qteResMobImo + pQte;
}
