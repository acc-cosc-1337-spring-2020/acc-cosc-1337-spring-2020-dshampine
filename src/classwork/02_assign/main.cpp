//Write the include statement for decisions.h here
#include "decision.h"
//Write include for capturing input from keyboard and displaying output to screen
#include<iostream>
using std::cout;
using std::cin;

//Write namespace using statements for cout and cin

int main() 
{
	//create a double variable named hours
	//create a double variable named hourly_rate
	double hours; double hourly_rate;
	//Prompt user for keyboard input for hours and hourly_rate
	//save the input to variables hours and hourly_rate
	cout << "Enter your hours workd: ";
	cin >> hours;

	cout << "Enter your hourly rate: ";
	cin >> hourly_rate;
	//Create a double variable named gross_salary
	//Call the gross_pay function and save its return value to the gross_salary variable
	double gross_salary;
	gross_salary = gross_pay(hours, hourly_rate);

	//Display the gross_salary variable as follows:
	//Example ---->>>     Gross pay: 150.00   
	cout << "Your gross pay is: $" << gross_salary;
	return 0;
}

