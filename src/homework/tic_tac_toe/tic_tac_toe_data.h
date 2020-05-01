//h
#include <vector>
#include<string>
#include<fstream>
#include "tic_tac_toe.h"


#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H
class TicTacToeData : TicTacToe
{
private:
	const std::string file_name{ "game.dat" };
	
public:
	void save_games(const std::vector<TicTacToe>& games);
	std::vector<std::unique_ptr<TicTacToe>> get_games();
};

#endif