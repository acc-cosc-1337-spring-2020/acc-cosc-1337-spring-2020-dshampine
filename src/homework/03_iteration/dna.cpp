#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string & dna)
{
	double total =0;

	for (int i = 0; i < dna.length(); ++i)
	{
		if (dna[i] == 'C' || dna[i] == 'G')
		{
			total += 1;
		}
	}

	return total / dna.length();
}





/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
	string result;

	for (int i = dna.length()-1; i >= 0; --i)
	{
		result += dna[i];
	}
	return result;
}




/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna)
{
	string dna_reverse;
	dna_reverse = get_reverse_string(dna);
	string result;

	for (int i = 0; i < dna_reverse.length(); ++i)
	{
		if (dna_reverse[i] == 'A')
		{
			result += 'T';
		}
		else if (dna_reverse[i] == 'T')
		{
			result += 'A';
		}
		else if (dna_reverse[i] == 'G')
		{
			result += 'C';
		}
		else if (dna_reverse[i] == 'C')
		{
			result += 'G';
		}
	}

	return result;
}

