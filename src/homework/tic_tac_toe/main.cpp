#include <iostream>
#include "tic_tac_toe.h"
#include "string"
using std::cout; using std::cin; using std::string;

int main() 
{

	
	int board_position; string player;
	string choice;

	try
	{
		cout << "To start the game make the first move as either X or O: ";
		cin >> player;

		TicTacToe game;
		game.start_game(player);

		do
		{
			cout << "Enter board position 1 - 9: ";
			cin >> board_position;
			game.mark_board(board_position);
			game.display_board();
			game.game_over();
			cout << "\nN for Next player or anyother key to quit. ";
			cin >> choice;
		} while (choice == "N" || choice == "n");
		}
		catch (Error err_msg) {
			cout << err_msg.get_message() << "\n";

	}
	
	return 0;
}