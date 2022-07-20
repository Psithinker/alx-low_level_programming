#include "main.h"

/**
 * _strlen_recursion - function to get length of string
 * @s: string pointer
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
int n = 0;

if (*s > '\0')
{
	n += _strlen_recursion(s + 1) + 1;
}

return (n);
}
