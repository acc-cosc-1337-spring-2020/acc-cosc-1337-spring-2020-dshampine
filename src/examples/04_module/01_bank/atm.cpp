#include "atm.h"

//atm.cpp

std::ostream & operator<<(std::ostream & out, const ATM & a)
{
	a.customer.display_accounts();
	
	return out;
	// TODO: insert return statement here
}