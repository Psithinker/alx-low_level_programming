#include "main.h"

/**
 * print_sign - print the sign of the input
 * @n: the variable ro be checked
 * Return: 1 if positive, 0 if zero, -1 negative
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
