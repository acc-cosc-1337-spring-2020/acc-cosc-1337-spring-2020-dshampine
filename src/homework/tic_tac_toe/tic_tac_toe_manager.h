//h
#include <iostream>
#include <memory>
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
using std::unique_ptr; using std::make_unique;
class TicTacToeManager //: public TicTacToe
{
public:
	void save_game(std::unique_ptr<TicTacToe>& b);
	friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
	void get_winner_total(int& o, int& x, int& t);
	unique_ptr<TicTacToe>get_game(int player);
private:
	std::vector<std::unique_ptr<TicTacToe>> games;
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
	void update_winner_count(string winner);
};

#endif