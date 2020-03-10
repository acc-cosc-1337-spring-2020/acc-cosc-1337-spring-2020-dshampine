//checking_account.h
#include "bank_account.h"

class CheckingAccount : public BankAccount
{
public:
	CheckingAccount() = default; //default constructor
	explicit CheckingAccount(int b) : BankAccount(b) {} //sends begining balance to BankAccount class
	int get_balance()const { return balance * (1 + get_rate()); }
};