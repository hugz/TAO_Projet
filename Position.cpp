#include"Position.h"

Position::Position(): x(0), y(0)
{
}

Position::Position(unsigned int pX, unsigned int pY): x(pX), y(pY)
{
}

void Position::setPosX(unsigned int pX)
{
    x = pX;
}

void Position::setPosY(unsigned int pY)
{
    y = pY;
}

unsigned int Position::getPosX()
{
    return x;
}

unsigned int Position::getPosY()
{
    return y;
}
