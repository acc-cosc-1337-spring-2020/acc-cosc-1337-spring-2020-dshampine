#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "string"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test can't call mark board before start game")
{
	TicTacToe player1;
	REQUIRE_THROWS_AS(player1.mark_board(4), Error);
}

TEST_CASE("Test start game accepts only X or O")
{
	TicTacToe player1;
	REQUIRE_THROWS_AS(player1.start_game("Y"), Error);
}

TEST_CASE("Test set first player to X")
{
	TicTacToe player1;
	player1.start_game("X");
	REQUIRE(player1.get_player() == "X");
}

TEST_CASE("Test set first player to O")
{
	TicTacToe player1;
	player1.start_game("O");
	REQUIRE(player1.get_player() == "O");
}

TEST_CASE("Test start game with X game flow")
{
	TicTacToe player1;
	player1.start_game("X");
	REQUIRE(player1.get_player() == "X");
	player1.mark_board(4);
	REQUIRE(player1.get_player() == "O");
}

TEST_CASE("Test start game with O game flow")
{
	TicTacToe player1;
	player1.start_game("O");
	REQUIRE(player1.get_player() == "O");
	player1.mark_board(2);
	REQUIRE(player1.get_player() == "X");
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
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(2); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(4); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(5); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(7); //X
	//X wins
	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by second column", "[X wins second column]")
{/*Tic Tac Toe Board
	123
	456
	789

	Second column win are user postitions 2, 5, and 8
	vector view: 1, 4, and 7 
 */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(2); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(1); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(5); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(4); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(8); //X
	//X wins
	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by thrid column", "[X wins third column]")
{/*Tic Tac Toe Board
	123
	456
	789

	Third column win are user postitions 3, 6, and 9
	vector view: 2, 5, and 8
 */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(1); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(6); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(4); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(9); //X
	//X wins
	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by first row", "[X wins first row]")
{/*Tic Tac Toe Board
	123
	456
	789

	First row win are user postitions 1, 2, and 3
	vector view: 0, 1, and 2
 */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(4); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(2); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(5); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(3); //X
	//X wins
	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by second row", "[X wins second row]")
{/*Tic Tac Toe Board
	123
	456
	789

	Second row win are user postitions 4, 5, and 6
	vector view: 3, 4, and 5
 */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(4); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(1); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(5); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(2); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(6); //X
	//X wins
	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by third row", "[X wins third row]")
{/*Tic Tac Toe Board
	123
	456
	789

	Third row win are user postitions 7, 8, and 9
	vector view: 6, 7, and 8
 */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(7); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(1); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(8); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(2); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(9); //X
	//X wins
	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by first diagonal", "[X wins first diagonal]")
{/*Tic Tac Toe Board
	123
	456
	789

	First diagonal win are user postitions 1, 5, and 9
	vector view: 0, 4, and 8
 */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(3); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(5); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(6); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(9); //X
	//X wins
	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by second diagonal", "[X wins second diagonal]")
{/*Tic Tac Toe Board
	123
	456
	789

	Second diagonal win are user postitions 3, 5, and 7
	vector view: 2, 4, and 6
 */
	TicTacToe board;
	TicTacToeManager manager;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(3); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(1); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(5); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(2); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(7); //X
	//X wins
	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test tie win", "[No winner all spaces full]")
{/*Tic Tac Toe Board
	123
	456
	789

	No winner
	vector view: 1, 2, 3, 4, 5, 6, 7, 8
 */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(5); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(3); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(2); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(8); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(6); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(4); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(7); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(9); //X
	
	//Tie
	REQUIRE(board.game_over() == true);

}
