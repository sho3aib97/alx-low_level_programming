#include "main.h"

/**
 * print_rev - a function to print in reverse
 *
 * @s: a pointer to a string
 *
 * Return: void value
*/

void print_rev(char *s)
{
	int n;

	n = 0;

	while (s[n])
		n++;

	while (n--)
		_putchar(s[n] + 0);
	_putchar('\n');
}
