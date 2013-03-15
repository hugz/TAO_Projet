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

   public :
       ///////CONSTRUCTEUR//////
       Mobile();
       Mobile(string pNom , Position pPos);

      ///////GETTER & SETTER//////
     void setVitesse(const unsigned int pVitesse);
     unsigned int getVitesse() const;
     bool seDeplacer(unsigned int pDirection);

 };

 #endif
