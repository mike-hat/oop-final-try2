#ifndef DESTROYER_H
#define DESTROYER_H

#include "WaterVehicle.h"
class Destroyer :
	public WaterVehicle
{
private:
	int length = 2;

public:
	Destroyer();
	
	~Destroyer();
};



#endif // !DESTROYER_H