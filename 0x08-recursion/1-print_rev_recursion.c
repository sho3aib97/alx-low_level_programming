#include "main.h"

/**
 * _print_rev_recursion - a function that return reversed strings
 *
 * @s: a pointer to a string
 *
 * Return: void value
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
