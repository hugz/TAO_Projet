#include "Random.h"
#include "Position.h"
#include "Homme.h"
#include "RessourcesMobiles.h"
#include <typeinfo>

 Homme::Homme() : Vision(GiveRand(1,3))
 {
 }

 Homme::Homme(string pNom , Position pPos, Monde * pPmonde) : Mobile(pNom, pPos, pPmonde), Vision(GiveRand(1,3))
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

 void Homme::chasser()
 {
     for(int i=1;i<=6;i++)
     {

         switch(i)
         {
            case 1 :
                if(typeid(getMonde().at(getMonde().getMap().find(Position(getPos().getPosX(), getPos().getPosY()+2))->second))==typeid("PetitEnfant"))
                {

                }
            break;

            case 2 :
                if(typeid(getMonde().at(getMonde().getMap().find(Position(getPos().getPosX()+1, getPos().getPosY()+1))->second))==typeid("PetitEnfant"))
                {

                }
            break;

            case 3 :
                if(typeid(getMonde().at(getMonde().getMap().find(Position(getPos().getPosX()-1, getPos().getPosY()+1))->second))==typeid("PetitEnfant"))
                {

                }
            break;

            case 4 :
                if(typeid(getMonde().at(getMonde().getMap().find(Position(getPos().getPosX(), getPos().getPosY()-2))->second))==typeid("PetitEnfant"))
                {

                }
            break;

            case 5 :
                if(typeid(getMonde().at(getMonde().getMap().find(Position(getPos().getPosX()-1, getPos().getPosY()-1))->second))==typeid("PetitEnfant"))
                {

                }
            break;

            case 6 :
                if(typeid(getMonde().at(getMonde().getMap().find(Position(getPos().getPosX()-1, getPos().getPosY()+1))->second))==typeid("PetitEnfant"))
                {

                }
            break;

            default:
            break;
         }
     }
 }

 void Homme::agir(){
   //chasser();
   seDeplacer(GiveRand(1,3));
 }
