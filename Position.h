#ifndef POSITION_H
#define POSITION_H

class Position
{
    private :
		unsigned int x;
		unsigned int y;

	public :
		Position();
		Position(unsigned int pX, unsigned int pY);
		void setPosX(unsigned int pX);
		void setPosY(unsigned int pY);
        unsigned int getPosX() const;
        unsigned int getPosY() const;
        bool operator < (const Position & pPos) const;
};

#endif
