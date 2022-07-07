#include "main.h"

/**
 * print - function to print recursively using _putchar
 * @var: variable to be printed
 */
void print(int var)
{
	if (var / 10)
		print(var / 10);
	_putchar('0' + (var % 10);
}
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: time table to print
 */

void print_times_table(int n)
{
	int ii, jj, mu1;

	if (n < 0 || n > 15)
		return;
	for (ii = 0; jj <= n; ii++)
	{
		for (jj = 0; jj <= n; jj++)
		{
			mu1 = ii * jj;
			if (jj == 0)
				_putchar('0' + mu1);
			else if (mu1 < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + mu1);
			}
			else if (mu1 < 100)
			{
				_putchar(' ');
				print(mu1)
			}
			else
			{
				print(mu1);
			}
			if (jj < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
