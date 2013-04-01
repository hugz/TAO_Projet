#include "Random.h"
#include "Position.h"
#include "Homme.h"
#include "RessourcesMobiles.h"
#include <typeinfo>
#include <iostream>
#include <stdlib.h>

 Homme::Homme() : Vision(GiveRand(1,3))
 {
 }

 Homme::Homme(string pNom , Position pPos, Monde * pPmonde) : Element(Mobile(pNom, pPos, pPmonde)), Vision(GiveRand(1,3))
 {
 }

 void Homme::setVision(const unsigned int pVis)
 {
     Vision=pVis;
 }

 unsigned int Homme::getVision() const
 {
     return Vision;
 }

 void Homme::violer()
 {
    RessourcesMobiles * resASup;

    if(getMonde()->isCaseEmpty(Position(getPos().getPosX(), getPos().getPosY()+2)) == false)
    {
        if(typeid(*getMonde()->at(getMonde()->getMap().find(Position(getPos().getPosX(), getPos().getPosY()+2))->second))==typeid(RessourcesMobiles))
            {
                int j = getMonde()->getMap().find(Position(getPos().getPosX(), getPos().getPosY()+2))->second;
                resASup = dynamic_cast<RessourcesMobiles*>(getMonde()->at(getMonde()->getMap().find(Position(getPos().getPosX(), getPos().getPosY()+2))->second));
                addQteResMob(resASup->getQte());
                cout<<"Ressources mobiles du peuple : : "<<getQteResMob()<<"\n";
                getMonde()->getMap().erase(getMonde()->at(j)->getPos());
                getMonde()->erase(getMonde()->begin()+j);
            }
    }

    else if(getMonde()->isCaseEmpty(Position(getPos().getPosX()+1, getPos().getPosY()+1)) == false)
    {
        if(typeid(*getMonde()->at(getMonde()->getMap().find(Position(getPos().getPosX()+1, getPos().getPosY()+1))->second))==typeid(RessourcesMobiles))
            {
                int j = getMonde()->getMap().find(Position(getPos().getPosX()+1, getPos().getPosY()+1))->second;
                resASup = dynamic_cast<RessourcesMobiles*>(getMonde()->at(getMonde()->getMap().find(Position(getPos().getPosX(), getPos().getPosY()+2))->second));
                addQteResMob(resASup->getQte());
                cout<<"Ressources mobiles du peuple : : "<<getQteResMob()<<"\n";
                getMonde()->getMap().erase(getMonde()->at(j)->getPos());
                getMonde()->erase(getMonde()->begin()+j);
            }
    }

    else if(getMonde()->isCaseEmpty(Position(getPos().getPosX()+1, getPos().getPosY()-1)) == false)
    {
        if(typeid(*getMonde()->at(getMonde()->getMap().find(Position(getPos().getPosX()-1, getPos().getPosY()+1))->second))==typeid(RessourcesMobiles))
            {
                int j = getMonde()->getMap().find(Position(getPos().getPosX()-1, getPos().getPosY()+1))->second;
                resASup = dynamic_cast<RessourcesMobiles*>(getMonde()->at(getMonde()->getMap().find(Position(getPos().getPosX(), getPos().getPosY()+2))->second));
                addQteResMob(resASup->getQte());
                cout<<"Ressources mobiles du peuple : : "<<getQteResMob()<<"\n";
                getMonde()->getMap().erase(getMonde()->at(j)->getPos());
                getMonde()->erase(getMonde()->begin()+j);
            }
    }

    else if(getMonde()->isCaseEmpty(Position(getPos().getPosX(), getPos().getPosY()-2)) == false)
    {
        if(typeid(*getMonde()->at(getMonde()->getMap().find(Position(getPos().getPosX(), getPos().getPosY()-2))->second))==typeid(RessourcesMobiles))
            {
                int j = getMonde()->getMap().find(Position(getPos().getPosX(), getPos().getPosY()-2))->second;
                resASup = dynamic_cast<RessourcesMobiles*>(getMonde()->at(getMonde()->getMap().find(Position(getPos().getPosX(), getPos().getPosY()+2))->second));
                addQteResMob(resASup->getQte());
                cout<<"Ressources mobiles du peuple : : "<<getQteResMob()<<"\n";
                getMonde()->getMap().erase(getMonde()->at(j)->getPos());
                getMonde()->erase(getMonde()->begin()+j);
            }
    }

   else if(getMonde()->isCaseEmpty(Position(getPos().getPosX()-1, getPos().getPosY()-1)) == false)
    {
        if(typeid(*getMonde()->at(getMonde()->getMap().find(Position(getPos().getPosX()-1, getPos().getPosY()-1))->second))==typeid(RessourcesMobiles))
            {
                int j = getMonde()->getMap().find(Position(getPos().getPosX()-1, getPos().getPosY()-1))->second;
                resASup = dynamic_cast<RessourcesMobiles*>(getMonde()->at(getMonde()->getMap().find(Position(getPos().getPosX(), getPos().getPosY()+2))->second));
                addQteResMob(resASup->getQte());
                cout<<"Ressources mobiles du peuple : : "<<getQteResMob()<<"\n";
                getMonde()->getMap().erase(getMonde()->at(j)->getPos());
                getMonde()->erase(getMonde()->begin()+j);
            }
    }

    else if(getMonde()->isCaseEmpty(Position(getPos().getPosX()-1, getPos().getPosY()+1)) == false)
    {
        if(typeid(*getMonde()->at(getMonde()->getMap().find(Position(getPos().getPosX()-1, getPos().getPosY()+1))->second))==typeid(RessourcesMobiles))
            {
                int j = getMonde()->getMap().find(Position(getPos().getPosX()-1, getPos().getPosY()+1))->second;
                resASup = dynamic_cast<RessourcesMobiles*>(getMonde()->at(getMonde()->getMap().find(Position(getPos().getPosX(), getPos().getPosY()+2))->second));
                addQteResMob(resASup->getQte());
                cout<<"Ressources mobiles du peuple : : "<<getQteResMob()<<"\n";
                getMonde()->getMap().erase(getMonde()->at(j)->getPos());
                getMonde()->erase(getMonde()->begin()+j);
            }
    }

 }

 void Homme::agir(){
   violer();
   seDeplacer(GiveRand(1,6));
 }
