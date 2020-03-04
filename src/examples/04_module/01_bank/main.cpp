#include "bank_account.h"
#include <iostream>
using std::cout;
int main()
{
	/*auto num{ 1 };
	auto num2{ 1.5 };
	auto c{ 'c' };
	auto flag{ true }; */

	//BankAccount a = 100; not explicit 
	//BankAccount a    default consctructor
	BankAccount a(100); //explicit constructor
	BankAccount account(500);
	auto balance = account.get_balance();
	
	cout << "Balance is: " << balance;

	auto amount{ 0 };
	cout << "\nEnter deposit amount: ";
	std::cin >> amount;

	try
	{
	account.deposit(amount);
	cout << "Balance is: " << account.get_balance();
	}
	catch (Invalid e)
	{
		cout << e.get_error() << "\n";
	}
	
	
	return 0;
}