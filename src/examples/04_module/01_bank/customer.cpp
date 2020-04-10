#include "customer.h"

//customer.cpp
void Customer::add_account(std::unique_ptr<BankAccount> & act)
{
	accounts.push_back(std::move(act));
}

void Customer::display_accounts() const
{
	for (auto& account : accounts)
	{
		std::cout << account->get_balance() << "\n";
	}
}
