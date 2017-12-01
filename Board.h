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
#include <cstdlib>
#include <ctime>

using namespace std;


class Board
{

	//TODO: torpedoes
	//TODO: place ships
private:
	

	Carrier userCarrier1;
	Battleship userBattleship1;
	Cruiser userCruiser1;
	Submarine userSubmarine1;
	Destroyer userDestroyer1;

	ifstream inputFile;
	//create vectors that contain ship locations
	//push_back the ship locations when you place a ship there

	//User & Computer board vectors
	vector <vector<char> > userShipGrid;
	vector <vector<char> > userGuessGrid;
	vector <vector<char> > computerShipGrid;
	vector <vector<char> > computerGuessGrid;

	//User & Computer vectors
	vector <string> userCarrier, userCarrierLocation, computerCarrier, computerCarrierLocation;
	vector <string> userBattleship, userBattleshipLocation, computerBattleship, computerBattleshipLocation;
	vector <string> userCruiser, userCruiserLocation, computerCruiser, computerCruiserLocation;
	vector <string> userSubmarine, userSubmarineLocation, computerSubmarine, computerSubmarineLocation;
	vector <string> userDestroyer, userDestroyerLocation, computerDestroyer, computerDestroyerLocation;

	int gridRows = 10, gridColumns = 10;

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
	void placeShipsFromFile(vector<string> shipFromFile);

	//initialize the computerShip vectors
	void initCompShips();

	//place the computer's ships in random non-overlapping locations within the game board
	void randomlyPlaceComputerShips(vector<string> shipFromComputer);

	//computer fires a torpedo at a random, unique location on userShipGrid
	//indicates hits and misses
	void fireComputerTorpedoes();

	//prompt user to fire a torpedo at the computerShipGrid
	//indicate hits and misses
	void fireUserComputerTorpedos();

	//quit function
	//qame ends if user enters 'q' while placing torpedoes
	void quitGame();


	void displayComputerGrid();
	~Board();
};

#endif // !BOARD_H
