#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <memory>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "string"

using std::unique_ptr; using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test can't call mark board before start game")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	REQUIRE_THROWS_AS(game->mark_board(1), Error);
}

TEST_CASE("Test start game accepts only X or O")
{
	unique_ptr<TicTacToe> game= make_unique<TicTacToe3>();
	REQUIRE_THROWS_AS(game->start_game("Y"), Error);
}

TEST_CASE("Test set first player to X")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test set first player to O")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test start game with X game flow")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
	game->mark_board(4);
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test start game with O game flow")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
	game->mark_board(2);
	REQUIRE(game->get_player() == "X");
}
/*
TEST_CASE("Test game ends when board is full")
{
	TicTacToe game;
	game.start_game("X");

	for (int i = 1; i < 9; ++i)
	{
		game.mark_board(i);
		REQUIRE(game.game_over() == false);
	}
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
}*/

TEST_CASE("Test win by first column", "[X wins first column]")
{/*Tic Tac Toe Board
	123
	456
	789

	First column win are user postitions 1, 4, and 7
	vector view: 0, 3, and 6
 */
	unique_ptr<TicTacToe3> board=make_unique<TicTacToe3>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //X
	//X wins
	REQUIRE(board->game_over() == true);

}

TEST_CASE("Test win by second column", "[X wins second column]")
{/*Tic Tac Toe Board
	123
	456
	789

	Second column win are user postitions 2, 5, and 8
	vector view: 1, 4, and 7 
 */
	unique_ptr<TicTacToe3> board = make_unique<TicTacToe3>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(8); //X
	//X wins
	REQUIRE(board->game_over() == true);

}

TEST_CASE("Test win by thrid column", "[X wins third column]")
{/*Tic Tac Toe Board
	123
	456
	789

	Third column win are user postitions 3, 6, and 9
	vector view: 2, 5, and 8
 */
	unique_ptr<TicTacToe3> board = make_unique<TicTacToe3>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //X
	//X wins
	REQUIRE(board->game_over() == true);

}

TEST_CASE("Test win by first row", "[X wins first row]")
{/*Tic Tac Toe Board
	123
	456
	789

	First row win are user postitions 1, 2, and 3
	vector view: 0, 1, and 2
 */
	unique_ptr<TicTacToe3> board = make_unique<TicTacToe3>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //X
	//X wins
	REQUIRE(board->game_over() == true);

}

TEST_CASE("Test win by second row", "[X wins second row]")
{/*Tic Tac Toe Board
	123
	456
	789

	Second row win are user postitions 4, 5, and 6
	vector view: 3, 4, and 5
 */
	unique_ptr<TicTacToe3> board = make_unique<TicTacToe3>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //X
	//X wins
	REQUIRE(board->game_over() == true);

}

TEST_CASE("Test win by third row", "[X wins third row]")
{/*Tic Tac Toe Board
	123
	456
	789

	Third row win are user postitions 7, 8, and 9
	vector view: 6, 7, and 8
 */
	unique_ptr<TicTacToe3> board = make_unique<TicTacToe3>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(8); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //X
	//X wins
	REQUIRE(board->game_over() == true);

}

TEST_CASE("Test win by first diagonal", "[X wins first diagonal]")
{/*Tic Tac Toe Board
	123
	456
	789

	First diagonal win are user postitions 1, 5, and 9
	vector view: 0, 4, and 8
 */
	unique_ptr<TicTacToe3> board = make_unique<TicTacToe3>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //X
	//X wins
	REQUIRE(board->game_over() == true);

}

TEST_CASE("Test win by second diagonal", "[X wins second diagonal]")
{/*Tic Tac Toe Board
	123
	456
	789

	Second diagonal win are user postitions 3, 5, and 7
	vector view: 2, 4, and 6
 */
	unique_ptr<TicTacToe3> board = make_unique<TicTacToe3>();
	board->start_game("X");
	
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //X
	//X wins
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test tie win", "[No winner all spaces full]")
{/*Tic Tac Toe Board
	123
	456
	789

	No winner
	vector view: 1, 2, 3, 4, 5, 6, 7, 8
 */
	unique_ptr<TicTacToe3> board = make_unique<TicTacToe3>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(8); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //X
	
	//Tie
	REQUIRE(board->game_over() == true);

}

TEST_CASE("Test win by first column 4x4", "[X wins first column]")
{/*Tic Tac Toe Board
	1 2  3  4
	5 6  7  8
	9 10 11 12
	13 14 15 16

	First column win are user postitions 1, 5, 9, and, 13
	vector view: 0, 4, 8, and 12
 */
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(13); //X
	//X wins
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win by second column 4x4", "[X wins first column]")
{/*Tic Tac Toe Board
	1 2  3  4
	5 6  7  8
	9 10 11 12
	13 14 15 16

	Second column win are user postitions 2, 6, 10, and, 14
	vector view: 1, 5, 9, and 13
 */
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(10); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(14); //X
	//X wins
	REQUIRE(board->game_over() == true);
}
TEST_CASE("Test win by third column 4x4", "[X wins first column]")
{/*Tic Tac Toe Board
	1 2  3  4
	5 6  7  8
	9 10 11 12
	13 14 15 16

	Third column win are user postitions 3, 7, 11, and, 15
	vector view: 2, 6, 10, and 14
 */
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(11); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(15); //X
	//X wins
	REQUIRE(board->game_over() == true);
}
TEST_CASE("Test win by fourth column 4x4", "[X wins first column]")
{/*Tic Tac Toe Board
	1 2  3  4
	5 6  7  8
	9 10 11 12
	13 14 15 16

	First column win are user postitions 4, 8, 12, and, 16
	vector view: 3, 7, 11, and 15
 */
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(8); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(12); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(11); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(16); //X
	//X wins
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win by first row 4x4", "[X wins first column]")
{/*Tic Tac Toe Board
	1 2  3  4
	5 6  7  8
	9 10 11 12
	13 14 15 16

	First row win are user postitions 1, 2, 3, and, 4
	vector view: 0, 1, 2, and 3
 */
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //X
	//X wins
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win by second row 4x4", "[X wins first column]")
{/*Tic Tac Toe Board
	1 2  3  4
	5 6  7  8
	9 10 11 12
	13 14 15 16

	First row win are user postitions 5, 6, 7, and, 8
	vector view: 4, 5, 6, and 7
 */
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(8); //X
	//X wins
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win by third row 4x4", "[X wins first column]")
{/*Tic Tac Toe Board
	1 2  3  4
	5 6  7  8
	9 10 11 12
	13 14 15 16

	First row win are user postitions 9, 10, 11, and, 12
	vector view: 8, 9, 10, and 11
 */
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(10); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(11); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(12); //X
	//X wins
	REQUIRE(board->game_over() == true);
}
TEST_CASE("Test win by fourth row 4x4", "[X wins first column]")
{/*Tic Tac Toe Board
	1 2  3  4
	5 6  7  8
	9 10 11 12
	13 14 15 16

	First row win are user postitions 13, 14, 15, and, 16
	vector view: 12, 13, 14, and 15
 */
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(13); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(14); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(15); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(16); //X
	//X wins
	REQUIRE(board->game_over() == true);
}
TEST_CASE("Test win by first diagonal 4x4", "[X wins first column]")
{/*Tic Tac Toe Board
	1 2  3  4
	5 6  7  8
	9 10 11 12
	13 14 15 16

	First diagonal win are user postitions 1, 6, 11, and, 16
	vector view: 0, 5, 10, and 15
 */
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(11); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(16); //X
	//X wins
	REQUIRE(board->game_over() == true);
}
TEST_CASE("Test win by second diagonal 4x4", "[X wins first column]")
{/*Tic Tac Toe Board
	1 2  3  4
	5 6  7  8
	9 10 11 12
	13 14 15 16

	Second diagonal win are user postitions 4, 7, 10, and, 13
	vector view: 3, 7, 9, and 12
 */
	unique_ptr<TicTacToe4> board = make_unique<TicTacToe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(10); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(13); //X
	//X wins
	REQUIRE(board->game_over() == true);
}