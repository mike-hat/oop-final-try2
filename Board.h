#ifndef BOARD_H
#define BOARD_H

#include "WaterVehicle.h"
#include <iostream>
#include <cctype>
using namespace std;

class Board
{

	//TODO: torpedoes
	//TODO: place ships
private:
	WaterVehicle ship;
	static int grid[10][10];
public:
	Board();

	//TODO: quit function
			//this will quit at user's request and 
			//indicate game is over,
			//display grid with all of their guesses
			//display locations of computer's ships

	//get user input
	void placeUserShips();

	//display grid
	void displayGrid();

	//place ships
	bool placeable(int _col, char _row, char _orientation);

	~Board();
};

#endif // !BOARD_H
