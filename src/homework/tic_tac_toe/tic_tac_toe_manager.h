//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include <memory>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include <vector>

using std::unique_ptr; using std::make_unique;
class TicTacToeManager 
{
public:
	TicTacToeManager() = default;
	void save_game(unique_ptr<TicTacToe>& game);
	friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
	~TicTacToeManager();
private:
	TicTacToeData data;
	void update_winner_count(string winner);
	std::vector<std::unique_ptr<TicTacToe>> games;
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
	
	
};

#endif