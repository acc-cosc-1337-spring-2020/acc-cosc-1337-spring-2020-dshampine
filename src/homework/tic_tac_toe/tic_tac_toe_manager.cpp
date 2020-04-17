#include "tic_tac_toe_manager.h"
//cpp
#include <iostream>

void TicTacToeManager::save_game(TicTacToe b)
{
	games.push_back(b);
	update_winner_count(b.get_winner());
}

void TicTacToeManager::get_winner_total(int & o, int & x, int & t)
{
	std::cout << "X wins: " << x_win << "\n";
	std::cout << "O wins: " << o_win << "\n";
	std::cout << "Ties: " << ties << "\n";
}

void TicTacToeManager::update_winner_count(string winner)
{
	if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else ties++;
}

std::ostream& operator << (std::ostream& out, const TicTacToeManager& manager)
{
	int x_win{ 0 }; int o_win{ 0 };
	int ties{ 0 };

	for (auto &game : manager.games)
	{
		out << game;

		if (game.get().get_winner() == "X")
		{
			x_win++;
		}
		else if (game.get().get_winner() == "O")
		{
			o_win++;

		}
		else
		{
			ties++;
		}
	}
	return out;
}

