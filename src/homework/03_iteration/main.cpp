//write include statements
#include<iostream>
#include "dna.h"
//write using statements
using std::cout; using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int menu_prompt = 0; string dna_input; string choice;

	do
	{
		cout << "Press 1 to get GC-content for a DNA string.\n";
		cout << "Press 2 to get reverse complement for DNA string.\n";
		cin >> menu_prompt;
		cout << "Enter DNA string: ";
		cin >> dna_input;

		if (menu_prompt == 1)
		{
			cout << "GC-content for DNA string " << dna_input << " : " << get_gc_content(dna_input);
		}
		else if (menu_prompt == 2)
		{
			cout << "Reverse complement for DNA string " << dna_input << " : " << get_dna_complement(dna_input);
		}

		cout << "\n\n** Press Y or y to run again or any other key to quit. ** ";
		cin >> choice;


	} while (choice == "Y" || choice == "y");
	

	return 0;
}