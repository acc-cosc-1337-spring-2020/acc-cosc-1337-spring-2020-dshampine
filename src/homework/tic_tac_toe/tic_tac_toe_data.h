//h
#include <vector>
#include<memory>
#include<string>
#include<fstream>
#include "tic_tac_toe.h"

using std::unique_ptr; using std::make_unique;

#ifndef TIC_TAC_TOE_DATA
#define TIC_TAC_TOE_DATA
class TicTacToeData : TicTacToe
{
private:
	const std::string file_name{ "game.dat" };
	
public:
	void save_games(const std::vector<std::unique_ptr<TicTacToe>>& pegs);
	std::vector<std::unique_ptr<TicTacToe>> get_games();
};

#endif