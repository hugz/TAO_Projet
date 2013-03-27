 #ifndef PEUPLE_H
 #define PEUPLE_H

#include "Element.h"

class Peuple
{
    private :
        static unsigned int nbEleH;
        static unsigned int nbEleF;
        static unsigned int nbEleE;
        static unsigned int qteResMob;
        static unsigned int qteResMobImo;

    public:
         unsigned int getNbEleH();
         unsigned int getNbEleF();
         unsigned int getNbEleE();
         unsigned int getQteResMob();
         unsigned int getQteResMobImo();
};

 #endif
