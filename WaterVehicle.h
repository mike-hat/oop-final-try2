#ifndef WATERVEHICLE_H
#define WATERVEHICLE_H

#include <string>
using namespace std;

struct boat
{
	int length;
	char orientation;
	bool sunk = false;
};

class WaterVehicle
{
protected:
	//int length;//ship length
	//char orientation;//vertical/horizontal
	//static char type;//used to identify ship type
	//bool sunk = false;//will turn true after the WaterVehicle is sunk
	boat boat;

public:
	WaterVehicle();

	//set length
	void setLength(int _length) { boat.length = _length; }// length = _length; }

	//get length
	int getLength() { return boat.length; }

	//set orientation
	void setOrientation(int _orientation) { boat.orientation = _orientation; }

	//get orientation
	char getOrientation() { return boat.orientation; }

	//set sunk
	void setSunk(bool _sunk) { boat.sunk = _sunk; }

	//get sunk
	bool getSunk() { return boat.sunk; }

	////return type of ship
	//string shipType(char type);


	~WaterVehicle();
};

#endif // !WATERVEHICLE_H
