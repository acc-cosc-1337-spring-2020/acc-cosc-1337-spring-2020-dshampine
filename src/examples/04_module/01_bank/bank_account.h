//bank_account.h
#include "string";
class BankAccount
{
public:
	BankAccount(int b) : balance{ b } {}
	int get_balance()const { return balance; } // const makes it so function can't be changed e.g. balance can't be changed before return
	void deposit(int amount);
	void withdraw(int amount);
private:
	int balance; //balance can be changed, not a const.
};

class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {}
	std::string get_error()const { return message; }

private:
	std::string message;
};