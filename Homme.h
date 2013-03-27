 #ifndef HOMME_H
 #define HOMME_H

 #include "Peuple.h"
 #include "Mobile.h"

 class Homme : public Peuple, public Mobile
 {
     private :
     unsigned int Vision;

    public :
       ///////CONSTRUCTEUR//////
       Homme();
       Homme(string pNom , Position pPos, Monde * pmonde);

      ///////GETTER & SETTER//////
     void setVision(const unsigned int pVis);
     unsigned int getVision() const;
     void chasser();
     void agir();
 };

 #endif
