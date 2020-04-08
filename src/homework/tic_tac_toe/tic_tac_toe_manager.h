//h
//#include <iostream>
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager : public TicTacToe
{
public:
	void save_game(const TicTacToe b);
	friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
private:
	std::vector<TicTacToe> games;
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
	void update_winner_count(string winner);
};

#endif