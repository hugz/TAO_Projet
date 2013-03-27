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
