#include "main.h"

/**
 * _puts_recursion - a function that prints a strings using recursion
 *
 * @s: a pointer to a string
 *
 * Return: void value
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
