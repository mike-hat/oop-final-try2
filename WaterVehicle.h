#ifndef WATERVEHICLE_H
#define WATERVEHICLE_H

#include <string>
using namespace std;

class WaterVehicle
{
protected:
	int length;//ship length
	char orientation;//vertical/horizontal
	static char type;//used to identify ship type
	bool sunk = false;//will turn true after the WaterVehicle is sunk

public:
	WaterVehicle();

	//set length
	void setLength(int _length) { length = _length; }

	//get length
	int getLength() { return length; }

	//set orientation
	void setOrientation(int _orientation) { orientation = _orientation; }

	//get orientation
	char getOrientation() { return orientation; }

	//set sunk
	void setSunk(bool _sunk) { sunk = _sunk; }

	//get sunk
	bool getSunk() { return sunk; }

	////return type of ship
	//string shipType(char type);


	~WaterVehicle();
};

#endif // !WATERVEHICLE_H
