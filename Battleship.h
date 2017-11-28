#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include "WaterVehicle.h"
class Battleship :
	public WaterVehicle
{
private:
	int _length = 4;

public:
	Battleship();
	~Battleship();
};

#endif // !BATTLESHIP_H
