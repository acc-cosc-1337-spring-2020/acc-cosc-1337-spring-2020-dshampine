#include "checking_account.h"
#include "savings_account.h"
#include "customer.h"
#include "atm.h"
#include <vector>
#include <iostream>
#include<memory>

using std::cout; using std::cin;
using std::unique_ptr; using std::make_unique;
int main()
{
	///*auto num{ 1 };
	//auto num2{ 1.5 };
	//auto c{ 'c' };
	//auto flag{ true }; */
	////BankAccount* z; //save memory for instance of Bank account type - pointer. cant instance BankAccount since it's abstrance.
	////z = new SavingsAccount(60); instantiates savings account - derived class or use unique pointer below
	////BankAccount a = 100; not explicit 
	////BankAccount a    default consctructor
	////int n = 0;
	////cout << n;
	////c++98
	////SavingsAccount* s = new SavingsAccount(500);
	////more code
	////delete s;
	////s = nullptr;


	////c++11
	////SavingsAccount s0;
	//unique_ptr<BankAccount> s = make_unique<SavingsAccount>(90);
	//unique_ptr<BankAccount> c = make_unique<CheckingAccount>(100);
	////SavingsAccount s1 = 1000; explicit prevents this type of constructor
	//Customer cust;
	//cust.add_account(s);
	//cust.add_account(c);

	//ATM atm(cust);
	//cust << atm;


	////CheckingAccount checking;
	////SavingsAccount s1;
	////std::vector<unique_ptr<BankAccount>> accounts;
	////accounts.push_back(std::move(s));
	////accounts.push_back(std::move(c));

	///*
	//for (auto &act : accounts)
	//{
	//	cout << act->get_balance() << "\n";
	//}
	//
	//BankAccount a(100); //explicit constructor
	//
	//BankAccount account(500);
	//cin >> account;
	//cout << account;
	//display_balance(account);

	//auto balance = account.get_balance();
	//
	//cout << "Balance is: " << balance;

	//auto amount{ 0 };
	//cout << "\nEnter deposit amount: ";
	//std::cin >> amount;

	//try
	//{
	//account.deposit(amount);
	//cout << "Balance is: " << account.get_balance();
	//}
	//catch (Invalid e)
	//{
	//	cout << e.get_error() << "\n";
	//}
	//*/
	
	return 0;
}