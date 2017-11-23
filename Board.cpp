#include "Board.h"



Board::Board()
{
}

void Board::placeUserShips()
{
	int col; //row var to place each ship
	char row;//column variables to place each ship
	char orientation;//ship orientation variable


	//display ship type & size
	cout << "Ship Type\tShip Size\n\n";
	cout << "Carrier\t\t5\n";
	cout << "Battleship\t4\n";
	cout << "Cruiser\t\t3\n";
	cout << "Submarine\t3\n";
	cout << "Destroyer\t2\n";

//carrier input
	cout << "\n\nChoose a letter/number coordinate from the grid below to place you Carrier\n";
	cout << "Enter \'q\' to quit\n\n";
	displayGrid();
	
	cout << "Enter the Row Letter: ";
	cin >> row;
	row = toupper(row);
	
	//check if player entered 'q' to quit
	/*
		TODO: quit the game if player entered 'q'
		TODO: make this a function
	*/

	//ensure proper input0
	while (!isalpha(row) || (row != 'A' && row != 'B' && row != 'C' && row != 'D'
		&& row != 'E' && row != 'F' && row != 'G' && row != 'H'
		&& row != 'I' && row != 'J'))
	{
			cout << "Enter the Row Letter A-J (\'q\' to quit): ";
			cin.clear();
			cin.ignore(256, '\n');
			cin >> row;
			row = toupper(row);

			//check if player entered 'q' to quit
			/*
			TODO: quit the game if player entered 'q'
			TODO: make this a function
			*/
	}//!while(!isalpha(row) || ...
	
	cout << "Enter the Column Number: ";
	cin >> col;
	
	//check for correct input
	while (cin.fail() || col < 1 || col > 10)
	{
		cout << "Enter the Column Number 1-10 (\'q\' to quit): ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> col;

		//TODO: quit
	}
	
	cout << "Enter the Carrier's Orientation\n"
		<< "\'v\' for vertical or \'h\' for horizontal: ";
	cin >> orientation;
	orientation = toupper(orientation);


	int count = 1;
	//check for correct input
	while ((orientation != 'V' && orientation != 'H'))
	{
		cout << "Enter \'v\' for vertical or \'h\' for horizontal (\'q\' to quit): ";
		//cin.clear();(--->>>>>>>>>causes this loop to just die :'-(
		//cin.ignore(256, 'n');
		cin >> orientation;
		orientation = toupper(orientation);
		//TODO: quit
	
	}//!while(isalpha(orientation)


//!carrier input
}//!placeUserShips()


void Board::displayGrid()
{
	char rowLetter = 'A';//used to display the row letter

	cout << "  ";//spaced to account for rowLetter formatting
	for (int i = 1; i <= 10; i++)//output the column number
	{
		cout << i << " ";
	}
	cout << endl;//space after column numbers

	for (int row = 0; row < 10; row++)//output the grid
	{
		cout << rowLetter << " ";
		for (int col = 0; col < 10; col++)
		{
			cout << "~ ";
		}
		cout << endl;
		rowLetter++;
	}//!output the grid
}

bool Board::placeable(int _col, char _row, char _orientation)
{
	bool placeable = false; //var to signify if ship may be placed at location
	
	for (int r = 0; r < 10; r++)
	{
		for (int c = 0; c < 10; c++)
		{
			if (c = _col)
			{
				//board[r][c] = 1;
			}
		}
	}
	//if a ship is already here
	//or if the ship falls off the board
	//return false
}

Board::~Board()
{
}
