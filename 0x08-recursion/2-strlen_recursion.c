#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: a pointer to a string value
 *
 * Return: integer value of the length
*/

int _strlen_recursion(char *s)
{
	int l = 1;

	if (*s > '\0')
		l += _strlen_recursion(s + 1);
	return (l - 1);
}
