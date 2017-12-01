#include "WaterVehicle.h"
#include "Board.h"

int main()
{
	srand(time(0));

	Board board;
	board.displayGrid();
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
	board.displayGrid();

	board.fireUserComputerTorpedos();
	board.displayComputerGrid();
	board.fireUserComputerTorpedos();
	board.displayComputerGrid();
	board.fireUserComputerTorpedos();
	board.displayComputerGrid();
	board.fireUserComputerTorpedos();
	board.displayComputerGrid();
	

	board.quitGame();

	return 0;
}