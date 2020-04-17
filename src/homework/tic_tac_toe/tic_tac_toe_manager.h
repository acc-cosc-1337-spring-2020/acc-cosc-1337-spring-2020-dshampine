//h
#include <iostream>
#include <functional>
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager //: public TicTacToe
{
public:
	void save_game(TicTacToe b);
	friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
	void get_winner_total(int& o, int& x, int& t);
private:
	std::vector<std::reference_wrapper<TicTacToe>> games;
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
	void update_winner_count(string winner);
};

#endif