#include "Board.h"



Board::Board()
{
	//initialize the game board to have water in each cell
	userGrid = vector<vector<char> >(rows, vector<char>(columns, water));
}

void Board::placeUserShips()
{
	/*(delete if unused)*/
	//int col; //row var to place each ship
	//char row;//column variables to place each ship
	char orientation;//ship orientation variable
	int column;//used within switch
	char row;//used within switch

	string coordinateInput, coordinate;

	//display ship type & size
	cout << "Ship Type\tShip Size\n\n";
	cout << "Carrier\t\t5\n";
	cout << "Battleship\t4\n";
	cout << "Cruiser\t\t3\n";
	cout << "Submarine\t3\n";
	cout << "Destroyer\t2\n";

//carrier input
	cout << "\nEnter a letter/number coordinate from the grid below to place you Carrier (ex: b4\n";
	cout << "Enter \'q\' to quit\n\n";
	cin >> coordinateInput;
	cout << "Enter the Carrier's Orientation\n"
		<< "\'v\' for vertical or \'h\' for horizontal: ";
	cin >> orientation;
	orientation = toupper(orientation);

	coordinate = getLocationLetterNumber(coordinateInput);
	columns = coordinate.at(0);
	row = coordinate.at(1);

	verticalShipPlacementForLoop(coordinate, orientation);

	/*switch (columns)
	{
	case 'A': verticalShipPlacementForLoop(coordinate, orientation);
	
		
		break;

	case 'B': verticalShipPlacementForLoop(coordinate, orientation);

		
		break;

	case 'C': verticalShipPlacementForLoop(coordinate, orientation);

		break;

	case 'D': verticalShipPlacementForLoop(coordinate, orientation);

		break;

	case 'E': verticalShipPlacementForLoop(coordinate, orientation);
		
		break;

	case 'F': verticalShipPlacementForLoop(coordinate, orientation);

		break;

	case 'G': verticalShipPlacementForLoop(coordinate, orientation);

		break;

	case 'H': verticalShipPlacementForLoop(coordinate, orientation);

		break;

	case 'I': verticalShipPlacementForLoop(coordinate, orientation);

		break;

	default:
		break;
	}*/
	
	
	
	
	//userCarrier.setOrientation(orientation);
	
	 
//!carrier input
}//!void Board::placeUserShips()





//loop through the grid 
//from an input row number
//to the final row or collumn
void Board::verticalShipPlacementForLoop(string location, char orientation)
{
	int colLocation = location[0];
	int rowLocation = location[1];
	 
	cout << "colLocation = " << colLocation;
	cout << "\nrowLocation = " << rowLocation << endl;

	for (rowLocation; rowLocation < 10; rowLocation++)
	{
		for (colLocation; colLocation < 10; colLocation++)
		{
			userGrid[rowLocation][colLocation] = ship;
		}
	}

	displayGrid();
	cout << " end of verticalShipPlacementForLoop()\n\n";
	
}//!void Board::verticalShipPlacementForLoop(int startCol)






//test for correct location input
//return location in letternumber format (ex: b4)
//used for computer and user input
string Board::getLocationLetterNumber(string _coordinate)
{
	char intKeys[] = "123456789";
	char charKeys[] = "abcdefghijABCDEFGHIJ";
	int locInt;//used to locate the first int within the location input
	char locChar;//used to locate the first char within the location input
	string returnString;

	
	//returnString[0] = first char within _coordinate
	for (int i = 0; i != _coordinate.length(); i++)
	{
		if (isalpha(_coordinate[i]))
		{
			locChar = _coordinate[i];
			returnString.push_back(_coordinate[i]);
			
			break;
		}
	}
		cout << "locChar = " << locChar << "\n\n";

	//returnString[2] = first int within _coordinate
	for (int i = 0; i != _coordinate.length(); i++)
	{
		if (isdigit(_coordinate[i]))
		{

			char num = _coordinate[i];
			returnString.push_back(_coordinate[i]);
			locInt = num - '0';
			break;
		}
	}
	cout << "locInt = " << locInt << "\n\n";
	cout << "returnString = " << returnString << "\n\n";

	return returnString;
		


	////check if player entered 'q' to quit
	///*
	//TODO: quit the game if player entered 'q'
	//TODO: make this a function
	//*/

}//!string Board::verifyLocationInput(string _coordinate)





//verify the orientation input is 'v' or 'h'
string Board::verifyOrientationInput(string _orientation)
{


	////cout << "Enter the Carrier's Orientation\n"
	////	<< "\'v\' for vertical or \'h\' for horizontal: ";
	////cin >> orientation;
	////orientation = toupper(orientation);


	////int count = 1;
	//////check for correct input
	////while ((orientation != 'V' && orientation != 'H'))
	////{
	////	cout << "Enter \'v\' for vertical or \'h\' for horizontal (\'q\' to quit): ";
	////	//cin.clear();(--->>>>>>>>>causes this loop to just die :'-(
	////	//cin.ignore(256, 'n');
	////	cin >> orientation;
	////	orientation = toupper(orientation);
	////	//TODO: quit

	////}//!while(isalpha(orientation)

}//!string Board::verifyOrientationInput(string _orientation)


 
 
 
//ensure user enters row letter from a-j
//and col number from 1-10
string Board::verifyLocationInput(string _location)
{
	char row = _location[0];
	int col = _location[1];

	//ensure proper letter input
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

	//ensure proper number input
	while (cin.fail() || col < 1 || col > 10)
	{
		cout << "Enter the Column Number 1-10 (\'q\' to quit): ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> col;

		//TODO: quit
	}
	
	//set location = to verified input
	_location[0] = row;
	_location[1] = col;

	return _location;
}//!string Board::verifyLocationInput(string _location)






//display grid as grid[rows][columns]
void Board::displayGrid()
{
	char rowLetter = 'A';//used to display the row letter

	cout << "  ";//spaced to account for rowLetter formatting
	for (int i = 1; i <= 10; i++)//output the column number
	{
		cout << i << " ";
	}
	cout << endl;//space after column numbers

	for (rows = 0; rows < 10; rows++)//output the grid
	{
		cout << rowLetter << " ";
		for (columns = 0; columns < 10; columns++)
		{
			cout << userGrid[rows][columns] << " ";
		}
		cout << endl;
		rowLetter++;
	}//!output the grid
}//!void Board::displayGrid()






//check if the ship can be placed
//it can't be placed if a ship already exists in the same place
//or if it falls off of the board
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
	return false;
}//!bool Board::placeable(int _col, char _row, char _orientation)






Board::~Board()
{
}
