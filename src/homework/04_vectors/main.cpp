#include <iostream>
#include "vectors.h"
using std::cin; using std::cout;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	std::vector<int> premade_vec{ 8, 4, 20, 88, 66, 99 }; 
	std::vector<int> user_populated_vec{};
	char choice;
	int menu_item;
	int num; std::vector<int> result; int num2;

	do {
		cout << "Enter 1 to get max from vector\n";
		cout << "Enter 2 to get a list of prime values up to or including a given number\n";
		cin >> menu_item;

		if (menu_item == 1)
		{
			cout << "1. Use premade vector {8, 4, 20, 88, 66, 99}?\n";
			cout << "2. Use your own vector? ";
			cin >> menu_item;

			if (menu_item == 1)
			{
				cout << "Max value is " << get_max_from_vector(premade_vec);
			}
			else if (menu_item == 2)
			{
				cout << "Enter integers until you're done.\n";
				
				do {
					cout << "Enter a number:\n";
					cin >> num2;
					user_populated_vec.push_back(num2);
					cout << "Press C  to Enter another number. Any other letter to see max value. \n";
					cin >> choice;
				} while (choice == 'c' || choice == 'C');
				cout << "Max value is " << get_max_from_vector(user_populated_vec);
			}
		}
		
		else if (menu_item == 2)
		{
			cout << "\nEnter a number to display prime numbers: ";
			cin >> num;
			result = vector_of_primes(num);
			cout << "List of primes for number " << num << "\n";
			for (auto i : result) {
				cout << i << " ";
			}
		}
		cout << "\nPress Y or y to run again. Any other key to exit. ";
		cin >> choice;

	} while (choice == 'Y' || choice == 'y');


	return 0;
}