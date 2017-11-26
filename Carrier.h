#ifndef CARRIER_H
#define CARRIER_H

#include "WaterVehicle.h"
class Carrier :
	public WaterVehicle
{
private:
	int _length = 5;


public:

	Carrier();
	~Carrier();
};

#endif // !CARRIER_H
