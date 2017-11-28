#ifndef BOARD_H
#define BOARD_H

#include "WaterVehicle.h"	//include the ships
#include "Carrier.h"		//so that they may be used on the board
#include "Battleship.h"
#include "Cruiser.h"
#include "Submarine.h"
#include "Destroyer.h"

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <sstream>
#include <iterator>
#include <vector>	

using namespace std;

class Board
{

	//TODO: torpedoes
	//TODO: place ships
private:
	Carrier userCarrier, computerCarrier;
	Battleship userBattleship, computerBattleship;
	Cruiser userCruiser, computerCruser;
	Submarine userSubmarine, computerSubmarine;
	Destroyer userDestroyer, computerDestroyer;

	//static int grid[10][10];
	vector <vector<char> > userGrid;

	int rows = 10, columns = 10;

	char miss = 'X';
	char hit = 'O';
	char water = '~';
	char ship = 'S';

	//for loop to insert into the grid
	void verticalShipPlacementForLoop(vector<int> location, char orientation, int shipLength);

public:
	Board();

	//TODO: quit function
			//this will quit at user's request and 
			//indicate game is over,
			//display grid with all of their guesses
			//display locations of computer's ships

	//get user input
	void placeUserShips();

	//convert the location input to letternumber format (ex: d8)
	string getLocationLetterNumber(string _location);

	//verify the location input is between a-j, and 1-10
	string verifyLocationInput(string _location);

	vector<int> changeLocationToInts(string _location);


	//verify the orientation input is 'v' or 'h'
	char verifyOrientationInput(char _orientation);


	//display grid
	void displayGrid();

	//test if ships can be placed where requested
	bool placeable(vector<int> location, int shipLength, char orientation);

	~Board();
};

#endif // !BOARD_H
