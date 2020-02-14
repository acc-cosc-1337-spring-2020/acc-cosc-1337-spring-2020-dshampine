//write includes statements
#include "loops.h"
//write using statements for cin and cout
#include<iostream>

using std::cout; using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int factorial_result;
	int choice=0;
	do
	{
		int num;
		cout << "Enter a number to calculate its factorial: ";
		cin >> num;
		factorial_result = factorial(num);
		cout << factorial_result;
		cout << "\n Press 1 to enter another number ";
		cin >> choice;
	} while (choice == 1);
	

	return 0;
}