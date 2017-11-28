#ifndef CRUISER_H


#include "WaterVehicle.h"
class Cruiser :
	public WaterVehicle
{
private:
	int _length = 3;

public:
	Cruiser();
	~Cruiser();
};

#define CRUISER_H
#endif // !CRUISER_H

