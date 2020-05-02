#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>
//cpp

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
	std::vector<std::unique_ptr<TicTacToe>> boards;
	std::ifstream read_file(game_data);
	std::string line;
	std::vector<std::string> pegs;

	if (read_file.is_open())
	{
		while (std::getline(read_file, line))
		{
			for (auto &ch : line)
			{
				std::string(1, ch);
				pegs.push_back(line);
			}
		}
	}

	std::string winner;
	std::unique_ptr<TicTacToe> game;

	if (pegs.size() == 9)
	{
		game = std::make_unique<TicTacToe3>(pegs, winner);
	}

	else if (pegs.size() == 16)
	{
		game = std::make_unique<TicTacToe4>(pegs, winner);
	}

	boards.push_back(game);
	read_file.close();
	return boards;
}

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
	std::ofstream file_out(game_data, std::ios_base::trunc);

	for (auto &game : games)
	{
		for (auto &ch : games)
		{
			file_out << *ch;
		}
		file_out << game->get_winner();
		file_out << "\n";
	}
	file_out.close();
}
