#include <iostream>
#include "tic_tac_toe.h"
#include "string"
using std::cout; using std::cin; using std::string;

int main() 
{
	int board_position;
	string choice;
	
	TicTacToe player_one;
	player_one.start_game("X");

	do 
	{
		cout << "Enter board position 1 - 9: ";
		cin >> board_position;
		player_one.mark_board(board_position);
		cout << "\nContinue Y or N ";
		cin >> choice;

	} while (choice == "Y" || choice == "y");

	return 0;
}