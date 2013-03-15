#include <cstdlib>
#include "Random.h"

unsigned int GiveRand(unsigned int pBorneMin, unsigned int pBorneMax )
{
    return rand()%(pBorneMax-pBorneMin)+pBorneMin;
}
