

 #ifndef MOBILE_H
 #define MOBILE_H

 #include<string>
 #include<vector>
 #include<map>
 #include "Position.h"
 #include "Element.h"

 using namespace std;

 class Mobile : public Element
 {
     private :
     unsigned int Vitesse ;
     unsigned int Vision ;

   public :
       ///////CONSTRUCTEUR//////
       Mobile();
       Mobile(string pNom , Position pPos);

      ///////GETTER & SETTER//////
     void setVitesse(const unsigned int pVitesse);
     void setVision(const unsigned int pVision);
     unsigned int getVitesse() const;
     unsigned int getVision() const;

 };

 #endif
