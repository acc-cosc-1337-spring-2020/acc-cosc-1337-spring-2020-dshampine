#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

//cpp

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
	return std::vector<std::unique_ptr<TicTacToe>>();
}

void TicTacToeData::save_games(const std::vector<TicTacToe>& games)
{
	std::ofstream file_out(file_name, std::ios_base::trunc);
	for (auto pegs : games)
	{
		for (auto ch : games)
		{
			file_out << " ";
		}

		file_out << get_winner();
		file_out << "\n";
	}

	file_out.close();
}
