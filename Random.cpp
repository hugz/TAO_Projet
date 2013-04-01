#include <cstdlib>
#include "Random.h"

unsigned int GiveRand(unsigned int pBorneMin, unsigned int pBorneMax )
{
    unsigned int valRand=rand()%(pBorneMax-pBorneMin)+pBorneMin;

    return valRand;
}
