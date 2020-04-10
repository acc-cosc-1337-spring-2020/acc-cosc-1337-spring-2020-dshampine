#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

#include <iostream>

using std::cout; using std::cin;

int main()
{
	TicTacToe game;
	TicTacToeManager manager;

	string player;
	bool while_running = true, error = true;
	int board_position;
	char answer = ' ';
	   	
	while (while_running)
	{
		
		while (error)
		{
			cout << "Make the first move as either X or O to start the game: ";
			cin >> player;
			try
			{
				game.start_game(player);
				error = false;
				cout << "\n"; 
			}
			catch (Error err_msg)
			{
				cout << err_msg.get_message();
			}
		}

		try
		{
			cin >> game;
			cout << game;
		}

		catch (Error e)
		{
			cout << e.get_message();
		}

		if (game.game_over() == false)
		{
			cout << "\nDo you want to continue(y/n): ";
			cin >> answer;
			std::cout << "\n"; 

			if (answer == 'n')
			{
				while_running = false;
			}
			else while_running = true;
		}
		else
		{
			manager.save_game(game);

			cout << "\nPlayer " << game.get_winner() << " has won the game!";

			cout << "\n\n" << manager; 
			std::cout << "\nDo you want to play again(Y/n): ";
			cin >> answer;
			std::cout << "\n"; 

			error = true; 
			if (answer == 'n')
			{
				while_running = false;
			}
			else while_running = true;
		}
	}


	return 0;
}