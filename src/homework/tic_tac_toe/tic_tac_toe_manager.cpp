#include "tic_tac_toe_manager.h"

//cpp

void TicTacToeManager::save_game(const TicTacToe b)
{
}

void TicTacToeManager::update_winner_count(string winner)
{
	if (winner == "X")
	{
		x_win += 1;
	}
	else if (winner == "O")
	{
		o_win += 1;
	}
	else ties += 1;
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	// TODO: insert return statement here
}
