#include "tic_tac_toe_manager.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
//cpp
#include <iostream>

TicTacToeManager::TicTacToeManager(TicTacToeData)
{
}

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& b)
{
	update_winner_count(b->get_winner());
	games.push_back(std::move(b));
	
}

void TicTacToeManager::get_winner_total(int & o, int & x, int & t)
{
	std::cout <<"\nX Wins: "<< x_win;
	std::cout <<"\nO Wins: " << o_win;
	std::cout << "\nTies: " << ties << "\n";
}

unique_ptr<TicTacToe> TicTacToeManager::get_game(int player)
{
	if (player == 3)
	{
		return std::unique_ptr<TicTacToe3>();
	}
	else if (player == 4)
	{
		return std::unique_ptr<TicTacToe4>();
	}
		
}

TicTacToeManager::~TicTacToeManager()
{
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

