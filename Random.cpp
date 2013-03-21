#include <cstdlib>
#include "Random.h"

unsigned int GiveRand(unsigned int pBorneMin, unsigned int pBorneMax )
{
    int valRand=rand()%(pBorneMax-pBorneMin)+pBorneMin;

    return valRand;
}
