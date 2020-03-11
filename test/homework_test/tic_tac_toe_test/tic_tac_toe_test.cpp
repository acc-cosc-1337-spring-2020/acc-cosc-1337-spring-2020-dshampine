#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
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
}

