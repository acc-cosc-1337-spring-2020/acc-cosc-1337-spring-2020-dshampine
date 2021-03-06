//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <string>
#include <vector>
#include <iostream>
using std::string;
class TicTacToe
{
public:
	TicTacToe(std::vector<std::string> p, string win) : pegs(p) {}
	//TicTacToe(int s) : pegs ( s*s, " " ) {}
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() const { return player; }
	string get_winner() const { return winner; }
	std::vector<string> get_pegs() const { return pegs; }
	friend std::ostream& operator<<(std::ostream& out, const TicTacToe& t);
	friend std::istream& operator>>(std::istream& in, TicTacToe& t);
protected:
	std::vector<string> pegs {};
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();
private:
	void set_next_player();
	bool check_board_full();
	void clear_board();
	void set_winner();
	string player;
	string winner;
	
};
#endif

#ifndef ERROR_H
#define ERROR_H
class Error
{
public:
	Error(string msg) : message{ msg } {}
	std::string get_message()const { return message; }
private:
	std::string message;
}; 
#endif
