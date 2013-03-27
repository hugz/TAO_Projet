#include "Random.h"
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

 /*bool Homme::chasser()
 {

 }*/

 void Homme::agir(){
   //chasser();
 }
