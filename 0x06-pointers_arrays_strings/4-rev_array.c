#include "main.h"
/**
 * reverse_array - reverse a int array
 * @a: pointer
 * @n: array length
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, half;

	n = n - 1;
	while (i <= n)
	{
		half = a[i];
		a[i++] = a[n];
		a[n--] = half;
	}
}
