#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "string"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test start game accepts only X or O")
{
	TicTacToe player1("Y");
	REQUIRE_THROWS_AS(player1.start_game("Y"), Error);
}

