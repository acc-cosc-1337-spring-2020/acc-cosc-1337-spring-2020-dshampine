#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test bank account constructor")
{
	BankAccount account(500);

	REQUIRE(account.get_balance() == 500);
}

TEST_CASE("Test bank account deposit")
{
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);

	account.deposit(50);
	REQUIRE(account.get_balance() == 550);

	account.deposit(-50);
	REQUIRE(account.get_balance() == 550);

	
}

TEST_CASE("Test bank account withdrawl")
{
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);

	account.withdraw(50);
	REQUIRE(account.get_balance() == 450);

	account.deposit(-1);
	REQUIRE(account.get_balance() == 450);

	account.deposit(-451);
	REQUIRE(account.get_balance() == 450);

}
