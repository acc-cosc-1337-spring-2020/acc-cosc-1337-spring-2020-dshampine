#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.

double gross_pay(double hours, double hourly_rate)
{
	double pay = 0;
	double overtime = 0;
	double overtime_hours = 0;
	double grosspay = 0;

	if (hours <= 40) {
		pay = hours * hourly_rate;
	}
	
	
	if (hours > 40)
	{
		pay = 40 * hourly_rate;
		overtime_hours = hours - 40;
		overtime = overtime_hours * (hourly_rate + (hourly_rate * .5));
	}
	 

	
	
	grosspay = pay + overtime;
	
	return grosspay;
}


