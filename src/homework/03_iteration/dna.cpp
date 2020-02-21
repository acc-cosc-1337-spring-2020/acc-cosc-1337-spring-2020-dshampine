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
	double gc_count = 0; double gc_content = 0;
	int dna_length = dna.length(); 

	for (int i = 0; i < dna_length; ++i)
	{
		if (dna[i] == 'C' || dna[i] == 'c' || dna[i] == 'G' || dna[i] == 'g')
		{
			gc_count += 1;
		}
	}
	gc_content = gc_count / dna_length;

	return gc_content;
}





/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
	string reverse_dna;

	for (int i = dna.length()-1; i >= 0; --i)
	{
		reverse_dna += dna[i];
	}
	return reverse_dna;
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
	string dna_complement;

	for (int i = 0; i < dna_reverse.length(); ++i)
	{
		if (dna_reverse[i] == 'A' || dna_reverse[i] == 'a')
		{
			dna_complement += 'T';
		}
		else if (dna_reverse[i] == 'T' || dna_reverse[i] == 't')
		{
			dna_complement += 'A';
		}
		else if (dna_reverse[i] == 'G' || dna_reverse[i] == 'g')
		{
			dna_complement += 'C';
		}
		else if (dna_reverse[i] == 'C' || dna_reverse[i] == 'c')
		{
			dna_complement += 'G';
		}
	}

	return dna_complement;
}

