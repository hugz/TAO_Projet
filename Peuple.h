#include "Element.h"
#include "Position.h"
#include "Mobile.h"
#include<string>
#include<iostream>

using namespace std;

class Peuple : public Mobile
{
    private :
        static unsigned int nbEleH;
        static unsigned int nbEleF;
        static unsigned int nbEleE;
        static unsigned int qteResMob;
        static unsigned int qteResMobImo;

    public:
        Peuple();

}