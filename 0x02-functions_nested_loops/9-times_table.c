#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int ii, jj, mu1;

	for (ii = 0; ii <= 9; ii++)
	{
		for (jj = 0; jj <= 9; jj++)
		{
			mu1 = ii * jj;
			if (jj == 0)
				_putchar('0' + mu1);
			else if (mu1 < 10)
			{
				_putchar(' ');
				_putchar('0' + mu1);
			}
			else
			{
				_putchar('0' + (mu1 / 10));
				_putchar('0' + (mu1 % 10));
			}
			if (jj < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
