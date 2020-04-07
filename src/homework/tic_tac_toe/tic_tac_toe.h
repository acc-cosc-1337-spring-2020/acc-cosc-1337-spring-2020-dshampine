//h
#include "string"
#include <vector>

using std::string;
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() { return player; }
	string get_winner() { return winner; }
	void display_board() const;
private:
	void set_next_player();
	bool check_board_full();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	void set_winner();
	string player;
	string winner;
	std::vector<std::string> pegs { 9, " " };
};
#endif

class Error
{
public:
	Error(std::string msg) : message{ msg } {}
	std::string get_message()const { return message; }
private:
	std::string message;
}; 
