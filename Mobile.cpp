#include "Element.h"
#include"Position.h"
#include"Mobile.h"
#include"Random.h"
#include<string>
#include<iostream>

using namespace std;

Mobile::Mobile() : Vitesse(GiveRand(1,3)) ,Vision(GiveRand(1,3))
{
}

Mobile::Mobile(String pNom , Position pPos) : Element(pNom,pPos) , Vitesse(GiveRand(1,3)) ,  Vision(GiveRand(1,3))
{
}

void Mobile::setVitesse(const unsigned int pVitesse)
{
    Vitesse=pVitesse;
}

void Mobile::setVision(const unsigned int pVision)
{
    Vision=pVision;

}

unsigned int Mobile::getVitesse() const
{
    return Vitesse;
}

unsigned int Mobile::getVision() const
{
    return Vision;
}
