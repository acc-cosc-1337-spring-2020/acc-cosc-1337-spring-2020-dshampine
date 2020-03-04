#include "tic_tac_toe.h"
#include "string"
//cpp

void TicTacToe::start_game(string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		player = first_player;
	}
	else
	{
		throw Error("Player must be an X or an O");
	}
}

void TicTacToe::mark_board(int position)
{
	if (position < 1 || position > 9)
	{
		throw Error("Position must be in range 1 to 9");
	}
	else if (player.empty() == true)
	{
		throw Error("Must start game first.");
	
	}
	set_next_player();
}



void TicTacToe::set_next_player()
{
	if (player == "X")
	{
		player = "O";
	} 
	else if (player == "O")
	{
		player = "X";
	}
}
/*
void TicTacToe::start_game(std::string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		player = first_player;
	}
	else {
		throw Error("Player must be an X or O.");
	}
}*/

