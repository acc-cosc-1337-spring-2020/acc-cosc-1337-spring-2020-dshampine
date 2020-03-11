//h
#include "string"
#include <vector>

using std::string;

class TicTacToe
{
public:
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() { return player; }
	void display_board() const;
private:
	void set_next_player();
	bool check_board_full();
	void clear_board();
	string player;
	std::vector<std::string> pegs { 9, " " };
};

class Error
{
public:
	Error(std::string msg) : message{ msg } {}
	std::string get_message()const { return message; }
private:
	std::string message;
}; 
