#include "tic_tac_toe.h"

//cpp

void TicTacToe::start_game(string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		player += first_player;
	}
	else
	{
		throw Error("Player must be an X or an O");
	}
}

void TicTacToe::mark_board(int position)
{
	if (position >= 1 || position <= 9)
	{
		set_next_player(position);
	}
	else
	{
		throw Error("Position must be in range 1 to 9");
	}
}

void TicTacToe::set_next_player()
{
	if (player == "X")
	{
		player == "O";
	} 
	else
	{
		player == "X";
	}
}

