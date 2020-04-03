#include <iostream>
#include "tic_tac_toe.h"
#include "string"
using std::cout; using std::cin; using std::string;

int main() 
{
	int board_position; string player;
	string choice; string play_again;

	while (!(play_again == "N" || play_again == "n"))
	{

		while (!(player == "X" || player == "O"))
		{
			try
			{
				cout << "Make the first move as either X or O to start the game: ";
				cin >> player;
			}
			catch (Error err_msg)
			{
				cout << err_msg.get_message() << "\n";
			}
		}

		TicTacToe game;
		game.start_game(player);

		while (!(choice == "N" || choice == "n"))
		{
			try
			{
				cout << "Enter board position 1 - 9: ";
				cin >> board_position;
				game.mark_board(board_position);
				game.display_board();
				if (game.game_over() == false)
				{
					cout << "Press N for next move ";
					cin >> player;
				}
				else if (game.game_over() == true)
				{
					if (game.get_winner() == "X" || game.get_winner() == "O")
					{
						cout << "The winner is: " << game.get_winner();
						break;
					}
					else if (game.get_winner() == "C")
					{
						cout << "The game is a tie!";
						break;
					}
					
				}


			}
			catch (Error err_msg)
			{
				cout << err_msg.get_message() << "\n";
			}
		}
		cout << "\nPress Y to play again or N to quit: ";
		cin >> play_again; 
	}
	
	return 0;
}