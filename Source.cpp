#include "WaterVehicle.h"
#include "Board.h"

int main()
{
	srand(time(0));//seed random for the entire program

	Board board;
	board.displayUserGrid();
	//board.placeUserShips();
	////board.displayGrid();
	board.inputShipsFromFile();



	board.fireComputerTorpedoes();
	board.fireComputerTorpedoes();
	board.fireComputerTorpedoes();
	board.fireComputerTorpedoes();
	board.fireComputerTorpedoes();
	board.fireComputerTorpedoes();
	board.fireComputerTorpedoes();
	board.fireComputerTorpedoes();
	board.fireComputerTorpedoes();
	board.fireComputerTorpedoes();
	board.fireComputerTorpedoes();
	board.fireComputerTorpedoes();
	board.fireComputerTorpedoes();
	board.fireComputerTorpedoes();
	board.fireComputerTorpedoes();
	board.displayUserGrid();

	cout << endl << endl;
	board.displayComputerGrid();

	board.fireUserTorpedos();
	board.displayComputerGrid();
	board.fireUserTorpedos();
	board.displayComputerGrid();
	board.fireUserTorpedos();
	board.displayComputerGrid();
	board.fireUserTorpedos();
	board.displayComputerGrid();
	

	board.quitGame();

	return 0;
}