#include "main.h"

/**
 * print_numbers - prints all numbers from 0 to 9
 *
 */

void print_numbers(void)
{
	int ii = 0

	do {
		_putchar(ii + '0');
		ii++;
	} while (ii < 10);

	_putchar('\n');
}
