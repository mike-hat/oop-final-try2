#include "Board.h"



Board::Board()
{
	//initialize the game board to have water in each cell
	userShipGrid = vector<vector<char> >(rows, vector<char>(columns, water));
	userGuessGrid = vector<vector<char> >(rows, vector<char>(columns, water));

	computerShipGrid = vector<vector<char> >(rows, vector<char>(columns, water));
	computerGuessGrid = vector<vector<char> >(rows, vector<char>(columns, water));

	//open the input file
	inputFile.open("ship_placement.csv");

}

void Board::placeUserShips()
{
	/*(delete if unused)*/
	//int col; //row var to place each ship
	//char row;//column variables to place each ship
	char orientation;//ship orientation variable
	int column;//used within switch
	char row;//used within switch
	vector<int> locationAsInts;

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


	coordinate = getLocationLetterNumber(coordinateInput);
	cout << "\n\n coordinate = " << coordinate << endl << endl;

	coordinate = verifyLocationInput(coordinate);
	cout << "\n\ncoordinate after exiting verifyCoordinateInput() = " << coordinate << "\n\n";


	columns = coordinate.at(0);
	row = coordinate.at(1);



	cout << "Enter the Carrier's Orientation\n"
		<< "\'v\' for vertical or \'h\' for horizontal: ";
	cin >> orientation;
	orientation = toupper(orientation);
	orientation = verifyOrientationInput(orientation);

	locationAsInts = changeLocationToInts(coordinate);

	placeable(locationAsInts, userCarrier1.getLength(), orientation);
	//placeable(vector<int> location, int shipLength, char orientation)
	cout << "l;aksjdfl;ajfd;lajfd";

	verticalShipPlacementForLoop(locationAsInts, orientation, userCarrier1.getLength());


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



//Battleship input
	cout << "\nEnter a letter/number coordinate from the grid below to place you Battleship (ex: b4\n";
	cout << "Enter \'q\' to quit\n\n";
	cin >> coordinateInput;


	coordinate = getLocationLetterNumber(coordinateInput);
	cout << "\n\n coordinate = " << coordinate << endl << endl;

	coordinate = verifyLocationInput(coordinate);
	cout << "\n\ncoordinate after exiting verifyCoordinateInput() = " << coordinate << "\n\n";


	columns = coordinate.at(0);
	row = coordinate.at(1);



	cout << "Enter the Carrier's Orientation\n"
		<< "\'v\' for vertical or \'h\' for horizontal: ";
	cin >> orientation;
	orientation = toupper(orientation);
	orientation = verifyOrientationInput(orientation);

	locationAsInts = changeLocationToInts(coordinate);

	placeable(locationAsInts, userBattleship1.getLength(), orientation);
	//placeable(vector<int> location, int shipLength, char orientation)
	cout << "l;aksjdfl;ajfd;lajfd";

	verticalShipPlacementForLoop(locationAsInts, orientation, userBattleship1.getLength());
//!Battleship input





//Cruiser input
	cout << "\nEnter a letter/number coordinate from the grid below to place you Cruiser (ex: b4\n";
	cout << "Enter \'q\' to quit\n\n";
	cin >> coordinateInput;


	coordinate = getLocationLetterNumber(coordinateInput);
	cout << "\n\n coordinate = " << coordinate << endl << endl;

	coordinate = verifyLocationInput(coordinate);
	cout << "\n\ncoordinate after exiting verifyCoordinateInput() = " << coordinate << "\n\n";


	columns = coordinate.at(0);
	row = coordinate.at(1);



	cout << "Enter the Carrier's Orientation\n"
		<< "\'v\' for vertical or \'h\' for horizontal: ";
	cin >> orientation;
	orientation = toupper(orientation);
	orientation = verifyOrientationInput(orientation);

	locationAsInts = changeLocationToInts(coordinate);

	placeable(locationAsInts, userCruiser1.getLength(), orientation);
	//placeable(vector<int> location, int shipLength, char orientation)
	cout << "l;aksjdfl;ajfd;lajfd";

	verticalShipPlacementForLoop(locationAsInts, orientation, userCruiser1.getLength());
	//!Cruiser input







	//Submarine input
	cout << "\nEnter a letter/number coordinate from the grid below to place you Submarine (ex: b4\n";
	cout << "Enter \'q\' to quit\n\n";
	cin >> coordinateInput;


	coordinate = getLocationLetterNumber(coordinateInput);
	cout << "\n\n coordinate = " << coordinate << endl << endl;

	coordinate = verifyLocationInput(coordinate);
	cout << "\n\ncoordinate after exiting verifyCoordinateInput() = " << coordinate << "\n\n";


	columns = coordinate.at(0);
	row = coordinate.at(1);



	cout << "Enter the Carrier's Orientation\n"
		<< "\'v\' for vertical or \'h\' for horizontal: ";
	cin >> orientation;
	orientation = toupper(orientation);
	orientation = verifyOrientationInput(orientation);

	locationAsInts = changeLocationToInts(coordinate);

	placeable(locationAsInts, userSubmarine1.getLength(), orientation);
	//placeable(vector<int> location, int shipLength, char orientation)
	cout << "l;aksjdfl;ajfd;lajfd";

	verticalShipPlacementForLoop(locationAsInts, orientation, userSubmarine1.getLength());
	//!Submarine input








	//Destroyer input
	cout << "\nEnter a letter/number coordinate from the grid below to place you Battleship (ex: b4\n";
	cout << "Enter \'q\' to quit\n\n";
	cin >> coordinateInput;


	coordinate = getLocationLetterNumber(coordinateInput);
	cout << "\n\n coordinate = " << coordinate << endl << endl;

	coordinate = verifyLocationInput(coordinate);
	cout << "\n\ncoordinate after exiting verifyCoordinateInput() = " << coordinate << "\n\n";


	columns = coordinate.at(0);
	row = coordinate.at(1);



	cout << "Enter the Carrier's Orientation\n"
		<< "\'v\' for vertical or \'h\' for horizontal: ";
	cin >> orientation;
	orientation = toupper(orientation);
	orientation = verifyOrientationInput(orientation);

	locationAsInts = changeLocationToInts(coordinate);

	placeable(locationAsInts, userDestroyer1.getLength(), orientation);
	//placeable(vector<int> location, int shipLength, char orientation)
	cout << "l;aksjdfl;ajfd;lajfd";

	verticalShipPlacementForLoop(locationAsInts, orientation, userDestroyer1.getLength());
	//!Destroyer input

}//!void Board::placeUserShips()





//loop through the grid 
//from an input row number
//to the final row or collumn
void Board::verticalShipPlacementForLoop(vector<int> location, char orientation, int shipLength)
{

	
	int rowLocation = location[0];//-1 because userGrid starts goes from 0-9
	int colLocation = location[1] - 1;//-1 because userGrid starts goes from 0-9

	int j = colLocation, k = rowLocation;

	cout << "rowLocation = " << rowLocation;
	cout << "\ncolLocation = " << colLocation << endl << endl << endl;

	
	if (orientation == 'H')
	{
		for (int i = 0; i < shipLength; i++)
		{
			userShipGrid[rowLocation][j] = ship;
			cout << "userGrid[i][j] = " << userShipGrid[rowLocation][j] << endl << "i, j = " << rowLocation << ", " << j << endl << endl;
			j++;
		}
	}

	if (orientation == 'V')
	{
		for (int i = 0; i < shipLength; i++)
		{
			userShipGrid[k][colLocation] = ship;
			cout << "userGrid[i][j] = " << userShipGrid[i][j] << endl << "i, j = " << i << ", " << j << endl << endl;
			k++;
		}
	}
	displayGrid();
	cout << "\n\nend of verticalShipPlacementForLoop()\n\n";
	
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
	//if ()				//eeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
	//{
	//	cout << "\n\neeeeeeeeee\n\n";	//eeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
	//	return "A1";					//eeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
	//}
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


//convert row to an int
vector<int> Board::changeLocationToInts(string _location)
{
	char letter = 'A';
	int number = 0;

	int rowNumber, colNumber;
	vector<char> vecLetter;
	vector<int> vecNumber;
	vector<int> locationAsInts;

	//link letters A-J with a number to change location row to
	for (number; number < 10; number++)
	{
		vecLetter.push_back(letter);
		vecNumber.push_back(number);
		letter++;
	}

	//replace the row letter in _location with its number representation
	for (int i = 0; i < 10; i++)
	{
		if (_location.c_str()[0] == vecLetter[i])
		{
			cout << "\n\nvecNumber[i] = " << vecNumber[i] << endl << endl;
			rowNumber = vecNumber[i];
			break;
		}

	}
	cout << "\n\nrowNumber = " << rowNumber << endl << endl;
	locationAsInts.push_back(rowNumber);
	locationAsInts.push_back(_location.c_str()[1] - '0');

	cout << "\n\nlocationAsInts[0] = " << locationAsInts[0] << endl;
	cout << "locationAsInts[1] = " << locationAsInts[1] << endl << endl << endl;

	return locationAsInts;
}
 

//ensure user enters row letter from a-j
//and col number from 1-10
string Board::verifyLocationInput(string _location) //_location is in LETTERnumber format (ex: F4)
{
	string row, colStr;
	row = _location.c_str()[0];
	row = toupper(row.c_str()[0]);//convert row to uppercase
	int col = _location.c_str()[1] - '0'; //convert _location[1] to an int

	cout << endl << endl;
	cout << "_location[0] = " << row << endl;
	cout << "_location[1] = " << col << endl;



	int count = 1;
	//ensure proper letter input
	while (!isalpha(row.c_str()[0]) || (row != "A" && row != "B" && row != "C" && row != "D"
		&& row != "E" && row != "F" && row != "G" && row != "H"
		&& row != "I" && row != "J"))
	{
		cout << "Enter the Row Letter A-J (\'q\' to quit): ";
		cin.clear();
		cin.ignore(256, '\n');

		cin >> row;
		row = toupper(row.c_str()[0]);

		cout << "\n\nrow = " << row << endl << endl;

		//check if player entered 'q' to quit
		/*
		TODO: quit the game if player entered 'q'
		TODO: make this a function
		*/
	}//!while(!isalpha(row) || ...


	//ensure proper number input
	//while ((col != "1" || col != "2" || col != "3" || col != "4" ||
	//	col != "5" || col != "5" || col != "6" || col != "7" || col != "8" || 
	//	col != "9" || col != "10"))
	while(!isdigit(col) && (col < 1 || col > 10))
	{
		cout << "Enter the Column Number 1-10 (\'q\' to quit): ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> col;

		//TODO: quit
	}
	
	//set location = to verified input
	_location[0] = row[0];
	colStr = to_string(col);//convert col back to a string
	_location[1] = colStr[0];//place the number (in string form) currently known as col into _location[1]


	cout << "\n\n_location = " << _location << endl << "end of verifyLocationInput function\n\n";

	return _location;
}//!string Board::verifyLocationInput(string _location)





//verify the orientation input is 'v' or 'h'
char Board::verifyOrientationInput(char _orientation)
{

	int count = 1;
	//check for correct input
	while ((_orientation != 'V' && _orientation != 'H'))
	{
		cout << "Enter \'v\' for vertical or \'h\' for horizontal (\'q\' to quit): ";
		//cin.clear();(--->>>>>>>>>causes this loop to just die :'-(
		//cin.ignore(256, 'n');
		cin >> _orientation;
		_orientation = toupper(_orientation);
		//TODO: quit

	}//!while(isalpha(orientation)

	cout << "\n\nend of verifyOrientationInput function\n\n";

	return _orientation;

}//!string Board::verifyOrientationInput(string _orientation)


 
 
 

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
			cout << userShipGrid[rows][columns] << " ";
		}
		cout << endl;
		rowLetter++;
	}//!output the grid
}//!void Board::displayGrid()






//check if the ship can be placed
//it can't be placed if a ship already exists in the same place
//or if it falls off of the board
bool Board::placeable(vector<int> location, int shipLength, char orientation)
{
	bool placeableBool = false; //var to signify if ship may be placed at location

	int rowLocation = location[0];//-1 because userGrid starts goes from 0-9
	int colLocation = location[1];//-1 because userGrid starts goes from 0-9
	
	if (orientation == 'H')
	{
		if ((colLocation + shipLength) > 10)
		{
			placeableBool = false;
			cout << "\n\nfalse colLocation + shipLength = " << colLocation + shipLength << endl << endl;
		}
		else if (userShipGrid[rowLocation][colLocation] == ship) placeableBool = false;

		else
		{
			placeableBool = true;
			cout << "\n\ntrue colLocation + shipLength = " << colLocation + shipLength << endl << endl;
		}
	}
	else if (orientation == 'V')
	{
		if ((rowLocation + shipLength) > 10)
		{
			placeableBool = false;
			cout << "false rowLocation + shipLength = " << rowLocation + shipLength << endl << endl;
		}

		else if (userShipGrid[rowLocation][colLocation] == ship) placeableBool = false;

		else
		{
			placeableBool = true;
			cout << "true0000 rowLocation + shipLength =	" << rowLocation + shipLength << endl << endl;
		}
	}
	else cout << "\n\njfljsfl;kjasdf;lkjasdfl;kjsadf\n\n";
	
	cout << "placeableBool = " << placeableBool << endl << endl;
	return placeableBool;
}//!bool Board::placeable(int _col, char _row, char _orientation)








void Board::inputShipsFromFile()
{
	stringstream ss;
	string ship, shipType, location, orientation;
	int count = 0;//used in while(inputFile)...
				  //every ship vector will contain 3 items
				  //and their will be a total of 5 ships/cases within the switch

	if (inputFile.fail())
	{
		cerr << "\n\nERROR: UNABLE TO READ FILE\n\n";
	}


	while (!(inputFile.eof()))
	{
		//ss >> inputFile;
		getline(inputFile, shipType, ',');
		getline(inputFile, location, ',');
		getline(inputFile, orientation, '\n');

		switch (count)
		{
		case 0: //the first line in the file is a description of the lines that follow
				//this will be ignored by the program
			break;

		case 1: userCarrier.push_back(shipType);
			userCarrier.push_back(location);
			userCarrier.push_back(orientation);
			break;

		case 2: userBattleship.push_back(shipType);
			userBattleship.push_back(location);
			userBattleship.push_back(orientation);
			break;

		case 3: userCruiser.push_back(shipType);
			userCruiser.push_back(location);
			userCruiser.push_back(orientation);
			break;

		case 4: userSubmarine.push_back(shipType);
			userSubmarine.push_back(location);
			userSubmarine.push_back(orientation);
			break;

		case 5: userDestroyer.push_back(shipType);
			userDestroyer.push_back(location);
			userDestroyer.push_back(orientation);
		default:
			break;
		}//!switch (count)

		count++;

	}//!while (inputFile)
	
	cout << "\n\ncompCarrier\n";
	for (int i = 0; i < userCarrier.size(); i++)
	{
		cout << userCarrier[i] << " ";
	}


	placeShipsFromFile(userCarrier);
	placeShipsFromFile(userBattleship);
	placeShipsFromFile(userCruiser);
	placeShipsFromFile(userSubmarine);
	placeShipsFromFile(userDestroyer);

}//!void Board::placeComputerShips()




void Board::placeShipsFromFile(vector<string> shipFromFile)
{

	string shipType = shipFromFile[0];
	string locStr = shipFromFile[1];
	string orientation = shipFromFile[2];
	int shipLength, rowLocation = locStr.c_str()[0] - '0', colLocation = locStr.c_str()[1] - '0';
	//*for rowLocation: A = 17, B = 18, ... I = 25 J = 26

	//convert shipType to uppercase
	//by coverting each letter in it to c_string, then that to uppercase
	for (int i = 0; i < shipType.length(); i++)
	{
		shipType[i] = toupper(shipType.c_str()[i]); 
	}

	//convert rowLocation to nums 1-10 from nums 17-26
	for (int i = 17; i < 26; i++)
	{
		if (rowLocation == i)
		{
			rowLocation -= 17;
		}
	}

	//get shipLength based upon ship type
	if (shipType == "CARRIER") shipLength = userCarrier1.getLength();
	else if (shipType == "BATTLESHIP") shipLength = userBattleship1.getLength();
	else if (shipType == "CRUISER") shipLength = userCruiser1.getLength();
	else if (shipType == "SUBMARINE") shipLength = userSubmarine1.getLength();
	else if (shipType == "DESTROYER") shipLength = userDestroyer1.getLength();
	else cout << "Unrecognized ship tye\n\n";


	//convert orientation to uppercase
	orientation = toupper(orientation.c_str()[0]);


	cout << "\n\nshipType = " << shipType << endl;
	cout << "rowLocation = " << rowLocation << " " << colLocation << endl;
	cout << "locStr = " << locStr << endl;
	cout << "shipLength = " << shipLength << "\norientation = " << orientation << endl << endl;




	//place the ships
	int j = colLocation - 1, k = rowLocation;
	if (orientation == "H")
	{
		for (int i = 0; i < shipLength; i++)
		{
			userShipGrid[rowLocation][j] = ship;
			j++;
		}
	}

	if (orientation == "V")
	{
		for (int i = 0; i < shipLength; i++)
		{
			userShipGrid[k][colLocation-1] = ship;
			k++;
		}
	}
	displayGrid();
	cout << "\n\nend of verticalShipPlacementForLoop()\n\n";

}//!void Board::placeShipsFromFile(vector<int> shipVec)

Board::~Board()
{
	inputFile.close();
}
