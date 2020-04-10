//customer.h
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
#include <memory>
#include<vector>
#include "bank_account.h"


class Customer
{
public:

	void add_account(std::unique_ptr<BankAccount>& act);
	void display_accounts()const;

private:
	std::vector<std::unique_ptr<BankAccount>> accounts;
};

#endif // !CUSTOMER_H