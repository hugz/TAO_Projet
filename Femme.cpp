#include "Random.h"
 #include "Femme.h"

 Femme::Femme() : Vision(GiveRand(1,3))
 {
 }

 Femme::Femme(string pNom , Position pPos, Monde * pPmonde) : Mobile(pNom, pPos, pPmonde), Vision(GiveRand(1,3))
 {
 }

 void Femme::setVision(const unsigned int pVis)
 {
     Vision=pVis;
 }

 unsigned int Femme::getVision() const
 {
     return Vision;
 }

 void Femme::agir(){
     seDeplacer(GiveRand(1,3));
     //seReproduire();
 }

