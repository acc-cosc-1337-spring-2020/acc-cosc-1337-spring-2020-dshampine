#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

//cpp

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
	return std::vector<std::unique_ptr<TicTacToe>>();
}

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& pegs)
{
	std::ofstream file_out(file_name, std::ios_base::trunc);
	for (auto peg : pegs)
	{
		
	}

	file_out.close();
}
