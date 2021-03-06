#ifndef PEUPLE_H
#define PEUPLE_H

#include "Element.h"

class Peuple : public virtual Element
{
    private :
        static unsigned int nbEleH;
        static unsigned int nbEleF;
        static unsigned int nbEleE;
        static unsigned int qteResMob;
        static unsigned int qteResMobImo;

    public:
		Peuple();
        static unsigned int getNbEleH();
        static unsigned int getNbEleF();
        static unsigned int getNbEleE();
        static unsigned int getQteResMob();
        static unsigned int getQteResMobImo();

        static void addNbEleH();
        static void addNbEleF();
        static void addNbEleE();
        static void addQteResMob(unsigned int pQte);
        static void addQteResMobImo(unsigned int pQte);

};

 #endif
