
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <memory>
#include<functional>
#include <iostream>

using std::cout; using std::cin;
using std::unique_ptr; using::std::make_unique;

int main()
{
	TicTacToeData* data;
	std::string choice;
	unique_ptr<TicTacToeManager> manager = make_unique<TicTacToeManager>(data);

	do
	{
		int player;
		std::string firstplayer;
			
		
		cout << "Enter 3 to play a 3x3 TicTacToe game or 4 to play a 4x4 game: ";
		cin >> player;
		unique_ptr<TicTacToe> game;
		if (player == 3)
		{
			game = make_unique<TicTacToe3>();
			
		}
		else if (player == 4)
		{
			game = make_unique<TicTacToe4>();
		}
		cout << "Make the first move as either X or O: ";
		cin >> firstplayer;
		game->start_game(firstplayer);
		while (game->game_over()==false)
		{
			cin >> *game;
			cout << *game;
		}
		manager->save_game(game);
		cout << "\nWinner: " << game->get_winner() << "\n";
		cout << "Do you want to play again?: " << "\n";
		cin >> choice;
	} while (choice == "Y" || choice == "y");

	cout << *manager;

	return 0;
}
