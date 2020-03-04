//h
#include "string"

using std::string;

class TicTacToe
{
public:
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() { return player; }
private:
	void set_next_player();
	string player;
};

class Error
{
public:
	Error(std::string msg) : message{ msg } {}
	std::string get_message()const { return message; }
private:
	std::string message;
}; 
