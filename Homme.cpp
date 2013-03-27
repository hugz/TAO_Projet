#include "Random.h"
#include "Position.h"
 #include "Homme.h"

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

         switch(pDirection)
         {
            case 1 :
                if(typeid(getMonde.at(getMonde.getMap().find(Position(getPos().getPosX(), getPos().getPosY()+2))->second))==typeid(ressourceMobile))
                {

                }
            break;

            case 2 :
                if(typeid(getMonde.at(getMonde.getMap().find(Position(getPos().getPosX(), getPos().getPosY()+2))->second))==typeid(ressourceMobile))
                {

                }
            break;

            case 3 :
                if(typeid(getMonde.at(getMonde.getMap().find(Position(getPos().getPosX(), getPos().getPosY()+2))->second))==typeid(ressourceMobile))
                {

                }
            break;

            case 4 :
                if(typeid(getMonde.at(getMonde.getMap().find(Position(getPos().getPosX(), getPos().getPosY()+2))->second))==typeid(ressourceMobile))
                {

                }
            break;

            case 5 :
                if(typeid(getMonde.at(getMonde.getMap().find(Position(getPos().getPosX(), getPos().getPosY()+2))->second))==typeid(ressourceMobile))
                {

                }
            break;

            case 6 :
                if(typeid(getMonde.at(getMonde.getMap().find(Position(getPos().getPosX(), getPos().getPosY()+2))->second))==typeid(ressourceMobile))
                {

                }
            break;

            default:
            break;
         }
         if(typeid(getMonde.at(getMonde.getMap().find(Position(getPos().getPosX(), getPos().getPosY()+2))->second))==typeid(ressourceMobile))
     }
 }

 void Homme::agir(){
   //chasser();
   seDeplacer(GiveRand(1,3));
 }
