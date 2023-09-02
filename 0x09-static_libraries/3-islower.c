#include "main.h"

/**
 * _islower - A function to check for lowercase letters
 *
 * @c: checks the input of the function
 *
 * Return: return 1 if 'c' is lowercase
 * otherwise always 0 (Success)
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
