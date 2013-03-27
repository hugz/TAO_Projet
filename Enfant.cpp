#include "Random.h"
 #include "Enfant.h"

 Enfant::Enfant() : Vision(GiveRand(1,3))
 {
 }

 Enfant::Enfant(string pNom , Position pPos, Monde * pPmonde) : Mobile(pNom, pPos, pPmonde), Vision(GiveRand(1,3))
 {
 }

 void Enfant::setVision(const unsigned int pVis)
 {
     Vision=pVis;
 }

 unsigned int Enfant::getVision() const
 {
     return Vision;
 }

 void Enfant::agir(){
 }

