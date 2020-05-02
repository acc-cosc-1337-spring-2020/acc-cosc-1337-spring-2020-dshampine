//h
#include "tic_tac_toe.h"
#include<fstream>

class TicTacToeData : TicTacToe
{
private:
	const std::string game_data;
public:
	void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);
	std::vector<std::unique_ptr<TicTacToe>> get_games();
};


