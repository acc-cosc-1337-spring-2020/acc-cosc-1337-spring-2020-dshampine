//h
#include "tic_tac_toe.h"

class TicTacToe3: public TicTacToe
{
public:
	TicTacToe3() = default;
	TicTacToe3() : TicTacToe(3) {}
	friend std::ostream& operator<<(std::ostream& out, const TicTacToe3& t);
	friend std::istream& operator>>(std::istream& in, TicTacToe3& b);
private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
};