#ifndef SUBMARINE_H
#define SUBMARINE_H

#include "WaterVehicle.h"
class Submarine :
	public WaterVehicle
{
private:
	int length = 3;

public:
	Submarine();
	~Submarine();
};


#endif // !SUBMARINE_H