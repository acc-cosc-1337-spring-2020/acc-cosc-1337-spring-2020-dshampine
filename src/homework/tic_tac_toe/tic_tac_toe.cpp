#include "tic_tac_toe.h"
//cpp



bool TicTacToe::game_over()
{
	if (check_column_win() == true || check_row_win() == true || check_diagonal_win() == true)
	{
		set_winner();
		return true;
	}
	else if (check_board_full() == true)
	{
		winner = "C";
		return true;
	}
	return false;
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
	if (position < 1 || position > pegs.size())
	{
		throw Error("Position must be in range 1 to 9");
	}
	else if (player.empty() == true)
	{
		throw Error("Must start game first.");
	
	}

	pegs[position - 1] = player;
	set_next_player();
}
std::ostream& operator<<(std::ostream& out, const TicTacToe& t)
{
	if (t.pegs.size() == 9)
	{
		for (int i = 0; i < 9; i += 3)
				{
					out << t.pegs[i] << "|" << t.pegs[i + 1] << "|" << t.pegs[i + 2] << "\n";
				}
			return out;
	}
	else if (t.pegs.size() == 16)
	{
		for (int i = 0; i < 16; i += 4)
		{
			out << t.pegs[i] << "|" << t.pegs[i + 1] << "|" << t.pegs[i + 2] << "|" << t.pegs[i + 3] << "\n";
		}
	}
	
}

std::istream& operator>>(std::istream& in, TicTacToe& t)
{
	int pos{ 0 };
	std::cout << "Player " << t.get_player() << " enter a position: ";
	in >> pos;
	t.mark_board(pos);

	return in;
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
	/*for (int i = 0; i < pegs.size(); ++i)
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
	}*/
	return false;
}
bool TicTacToe::check_row_win()
{
	/*for (int i = 0; i < pegs.size(); ++i)
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
	}*/
	return false;
}
bool TicTacToe::check_diagonal_win()
{
	/*for (int i = 0; i < pegs.size(); ++i)
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
	}*/
	return false;
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
