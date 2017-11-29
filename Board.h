#ifndef BOARD_H
#define BOARD_H

#include "WaterVehicle.h"	//include the ships
#include "Carrier.h"		//so that they may be used on the board
#include "Battleship.h"
#include "Cruiser.h"
#include "Submarine.h"
#include "Destroyer.h"

#include <iostream>
#include <fstream>
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
	Carrier userCarrier1, computerCarrier;
	Battleship userBattleship1, computerBattleship;
	Cruiser userCruiser1, computerCruser;
	Submarine userSubmarine1, computerSubmarine;
	Destroyer userDestroyer1, computerDestroyer;

	ifstream inputFile;

	vector <vector<char> > userShipGrid;
	vector <vector<char> > userGuessGrid;

	//computer vectors
	vector <vector<char> > computerShipGrid;
	vector <vector<char> > computerGuessGrid;
	vector <string> userCarrier;
	vector <string> userBattleship;
	vector <string> userCruiser;
	vector <string> userSubmarine;
	vector <string> userDestroyer;

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

	//get user input and place ships on the board
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

	//input ships from ship_placement.csv
	void inputShipsFromFile();

	//place the ships from the file onto the board
	void placeShipsFromFile(vector<string> ship);

	~Board();
};

#endif // !BOARD_H
