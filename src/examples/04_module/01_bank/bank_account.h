//bank_account.h
#include "string"
class BankAccount
{
public:
	BankAccount() = default; //default constructor
	explicit BankAccount(int b) : balance{ b } {}
	int get_balance()const { return balance; } // const makes it so function can't be changed e.g. balance can't be changed before return
	void deposit(int amount);
	void withdraw(int amount);
	void open(int amount);
private:
	int balance{ 0 }; //balance can be changed, not a const.
	const int min_balance_to_open{ 25 };
};

class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {}
	std::string get_error()const { return message; }

private:
	std::string message;
};