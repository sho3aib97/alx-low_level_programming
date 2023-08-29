#include "main.h"

/**
 * _puts - a function to print a string followed by a new line
 *
 * @str: a pointer to a string to print
 *
 * Return: void value (nothing)
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i] + 0);
	_putchar('\n');
}
