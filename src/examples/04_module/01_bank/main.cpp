#include "bank_account.h"
#include <iostream>
using std::cout;
int main()
{
	/*auto num{ 1 };
	auto num2{ 1.5 };
	auto c{ 'c' };
	auto flag{ true }; */



	BankAccount account(500);
	auto balance = account.get_balance();
	
	cout << "Balance is: " << balance;

	auto amount{ 0 };
	cout << "Enter deposit amount: ";
	std::cin >> amount;
	
	return 0;
}