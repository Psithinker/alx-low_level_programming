#include "main.h"

/**
 * print_alphabet_×10 - print 10 times the alphabet, in lowercase
 *
 */
void print_alphabet_×10(void)
{
	int ii = 0;
	
	while (ii < 10)
	{
		int jj;

		for (jj = 'a'; jj <= 'z'; jj++)
			_putchar(jj);
		_putchar('\n')

		ii++;
	}
}
