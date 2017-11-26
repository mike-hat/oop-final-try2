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
	Destroyer userdestroyer, computerDestroyer;

	//static int grid[10][10];
	vector <vector<char> > userGrid;

	int rows = 10, columns = 10;

	char miss = 'X';
	char hit = 'O';
	char water = '~';
	char ship = 'S';

	//for loop to insert into the grid
	void verticalShipPlacementForLoop(string location, char orientation);

public:
	Board();

	//TODO: quit function
			//this will quit at user's request and 
			//indicate game is over,
			//display grid with all of their guesses
			//display locations of computer's ships

	//get user input
	void placeUserShips();

	//verifyUserInput()
	string verifyLocationInput(string _location);

	//display grid
	void displayGrid();

	//test if ships can be placed where requested
	bool placeable(int _col, char _row, char _orientation);

	~Board();
};

#endif // !BOARD_H
