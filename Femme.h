#ifndef FEMME_H
 #define FEMME_H

 #include "Peuple.h"
 #include "Mobile.h"

 class Femme : public Peuple, public Mobile
 {
     private :
     unsigned int Vision;

    public :
       ///////CONSTRUCTEUR//////
       Femme();
       Femme(string pNom , Position pPos, Monde * pmonde);

      ///////GETTER & SETTER//////
     void setVision(const unsigned int pVis);
     unsigned int getVision() const;
    //seReproduire();
     void agir();
 };

 #endif

