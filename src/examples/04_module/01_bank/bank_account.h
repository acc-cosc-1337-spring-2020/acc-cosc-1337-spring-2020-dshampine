//bank_account.h
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