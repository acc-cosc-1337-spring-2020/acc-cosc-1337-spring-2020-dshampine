#include "tic_tac_toe_manager.h"

//cpp

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& game)
{
	update_winner_count(game->get_winner());
	games.push_back(std::move(game));
	
}

TicTacToeManager::~TicTacToeManager()
{
	TicTacToeData* saved_game;
	saved_game->save_games;
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
	out << "\n";
	
	for (auto &game : manager.games)
	{
		out << *game;

	}

	out << "\nO wins: " << manager.o_win << "\n";
	out << "X wins: " << manager.x_win << "\n";
	out << "Ties  : " << manager.ties << "\n";

	return out;
}

