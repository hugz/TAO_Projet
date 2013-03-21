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

 Mobile::Mobile(string pNom , Position pPos, Monde * pPmonde) : Element(pNom,pPos,pPmonde) , Vitesse(GiveRand(1,3))
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
    unsigned indice;
    Position oldPos = getPos();
    Position newPos;
    cout<<"pos en X : "<<oldPos.getPosX()<<". pos en Y : "<<oldPos.getPosY()<<endl;

    getMonde()->afficher();
    cout<<"\ndb just avant : unsigned indice = getMonde()->getMap().find(oldPos)->second;\n"<<endl;

    if (getMonde()->getMap().find(oldPos)== getMonde()->getMap().end())
            cout<<"bug"<<endl;
    else
     indice = getMonde()->getMap().find(oldPos)->second;


    cout<<"db apres indice"<<endl;
     switch(pDirection)
     {
        case 1 :
            cout<<"db case 1";
            newPos = Position(getPos().getPosX(),getPos().getPosY()+2);
            //quand on vas vers le nord on inc l'ordonnée de +2
            setPos(Position(getPos().getPosX(),getPos().getPosY()+2));
            getMonde()->getMap().erase(oldPos);
            getMonde()->getMap().insert(pair<Position,unsigned>(newPos,indice));
            //return true;
        break;

        case 2 :
            // +1 en ab +1 en ord
             newPos = Position(getPos().getPosX()+1,getPos().getPosY()+1);
            setPos(Position(getPos().getPosX()+1,getPos().getPosY()+1));

            getMonde()->getMap().erase(oldPos);
            getMonde()->getMap().insert(pair<Position,unsigned>(newPos,indice));

        break;

        case 3 :
            // +1 en ord -1 en abs
             newPos = Position(getPos().getPosX()-1,getPos().getPosY()+1);
            setPos(Position(getPos().getPosX()-1,getPos().getPosY()+1));
            getMonde()->getMap().erase(oldPos);
            getMonde()->getMap().insert(pair<Position,unsigned>(newPos,indice));

        break;

        case 4 :
            //-2 en ord
             newPos = Position(getPos().getPosX(),getPos().getPosY()-2);
            setPos(Position(getPos().getPosX(),getPos().getPosY()-2));
            getMonde()->getMap().erase(oldPos);
            getMonde()->getMap().insert(pair<Position,unsigned>(newPos,indice));

        break;

        case 5 :
            //-1 en ord -1 en abs
             newPos = Position(getPos().getPosX()-1,getPos().getPosY()-1);
            setPos(Position(getPos().getPosX()-1,getPos().getPosY()-1));
            getMonde()->getMap().erase(oldPos);
            getMonde()->getMap().insert(pair<Position,unsigned>(newPos,indice));

        break;

        case 6 :
            //-1 en abs +1 en ord
             newPos = Position(getPos().getPosX()-1,getPos().getPosY()+1);
            setPos(Position(getPos().getPosX()-1,getPos().getPosY()+1));
            getMonde()->getMap().erase(oldPos);
            getMonde()->getMap().insert(pair<Position,unsigned>(newPos,indice));

        break;

        default:
            return false;

        break;

     }

     return true;
 }

 void Mobile::agir(){
     cout<<"db agir avant se déplacer.";
     seDeplacer(1);
 }
