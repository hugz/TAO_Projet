#ifndef BIBLES_H
#define BIBLES_H

#include "Peuple.h"
#include "Mobile.h"

class Bilbles : public Peuple, public Mobile
{
 private :
 unsigned int Vision;

public :
   ///////CONSTRUCTEUR//////
   Enfant();
   Enfant(string pNom , Position pPos, Monde * pmonde);

  ///////GETTER & SETTER//////
 void setVision(const unsigned int pVis);
 unsigned int getVision() const;

 void agir();
};

#endif

