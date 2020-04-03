#include "tic_tac_toe.h"
#include "string"
#include <iostream>
//cpp



bool TicTacToe::game_over()
{
	if (check_column_win() == true || check_row_win() == true || check_diagonal_win() == true)
	{
		set_winner();
		return true;
	}
	else if (check_board_full() == false)
	{
		winner = "C";
		return false;
	}
	//{
	//	return true;
	//}
	//else if (check_board_full() == false)
	//{
	//	return false;
	//}
	//else if (check_board_full() == true)
	//{
	//	return true;
	//}
	////return check_board_full();
}

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
	clear_board();
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

	pegs[position - 1] = player;
	//check_column_win();
	set_next_player();
}

void TicTacToe::display_board() const
{
	for (int i = 0; i < 9; i += 3)
	{
		std::cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}
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
bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0; i < pegs.size(); ++i)
	{
		if (pegs[i] == " ")
		{
			return false;
		}
	}

	return true;
}
bool TicTacToe::check_column_win()
{
	for (int i = 0; i < pegs.size(); ++i)
	{
		if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X" ||
			pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X" ||
			pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
		{
			return true;
		}
		else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O" ||
			pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O" ||
			pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
		{
			return true;
		}
		else return false;
	}
	//return false;
}
bool TicTacToe::check_row_win()
{
	for (int i = 0; i < pegs.size(); ++i)
	{
		if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X" ||
			pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X" ||
			pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
		{
			return true;
		}
		else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O" ||
			pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O" ||
			pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
		{
			return true;
		}
		else return false;
	}
	//return false;
}
bool TicTacToe::check_diagonal_win()
{
	for (int i = 0; i < pegs.size(); ++i)
	{
		if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X" ||
			pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
		{
			return true;
		}
		else if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O" ||
			pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
		{
			return true;
		}
		else return false;
	}
	//return false;
}
void TicTacToe::clear_board()
{
	for (auto &peg : pegs)
	{
		peg = " ";
	}
}
void TicTacToe::set_winner()
{
	if (player == "X")
	{
		winner = "O";
	} 
	else winner = "X";
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

