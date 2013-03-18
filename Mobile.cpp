 #include "Element.h"
 #include "Position.h"
 #include "Mobile.h"
 #include "Random.h"
 #include<string>
 #include<iostream>

 using namespace std;

 Mobile::Mobile() : Vitesse(GiveRand(1,3))
 {
 }

 Mobile::Mobile(string pNom , Position pPos) : Element(pNom,pPos) , Vitesse(GiveRand(1,3))
 {
 }

 void Mobile::setVitesse(const unsigned int pVitesse)
 {
     Vitesse=pVitesse;
 }

 unsigned int Mobile::getVitesse() const
 {
     return Vitesse;
 }
 bool Mobile::seDeplacer(unsigned int pDirection)
 {
     /**
     NORD = 1,
     NORD_EST = 2 ,
     SUD_EST = 3,
     SUD = 4,
     SUD_OUEST = 5,
     NORD_OUEST = 6;**/
     unsigned int nouvPosY;
     unsigned int nouvPosX;
     switch(pDirection)
     {
        case 1 :
            //quand on vas vers le nord on inc l'ordonnée de +2

            getPos().setPosY(getPos().getPosY()+2);
            setPos(Position(getPos().getPosX(),getPos().getPosY()));
            //return true;
        break;

        case 2 :
            // +1 en ab +1 en ord
            nouvPosY = getPos().getPosY()+1;
            getPos().setPosY(nouvPosY);

            nouvPosX = getPos().getPosX()+1;
            getPos().setPosX(nouvPosX);
            //return true;

        break;

        case 3 :
            // +1 en ord -1 en abs
            nouvPosY = getPos().getPosY()-1;
            getPos().setPosY(nouvPosY);

            nouvPosX = getPos().getPosX()+1;
            getPos().setPosX(nouvPosX);
           // return true;

        break;

        case 4 :
            nouvPosY = getPos().getPosY()-2;
            getPos().setPosY(nouvPosY);
            //return true;

        break;

        case 5 :
            nouvPosY = getPos().getPosY()-1;
            getPos().setPosY(nouvPosY);

            nouvPosX = getPos().getPosX()-1;
            getPos().setPosX(nouvPosX);
           // return true;

        break;

        case 6 :
            nouvPosY = getPos().getPosY()+1;
            getPos().setPosY(nouvPosY);

            nouvPosX = getPos().getPosX()-1;
            getPos().setPosX(nouvPosX);
            //return true;

        break;

        default:
            //return false;

        break;

     }
     return true;
 }
