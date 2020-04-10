#include "tic_tac_toe_manager.h"
//cpp

void TicTacToeManager::save_game(const TicTacToe b)
{
	games.push_back(b);
	update_winner_count(b.get_winner());
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

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
	std::string option{ "" };
	for (auto game : manager.games)
	{
		out << game;
	}
	out << "X wins: " << manager.x_win << "\nO wins: " << manager.o_win << "\nTies: " << manager.ties;
	return out;
	// TODO: insert return statement here
}

