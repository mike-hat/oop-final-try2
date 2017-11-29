#include "WaterVehicle.h"
#include "Board.h"

int main()
{
	Board board;
	board.displayGrid();
	//board.placeUserShips();
	//board.displayGrid();
	board.inputShipsFromFile();

	return 0;
}