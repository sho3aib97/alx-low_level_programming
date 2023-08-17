#include "main.h"

/**
 * _isupper - check for uppercase letters
 *
 * @c: input
 *
 * Return: 1 if uppercase, 0 if otherwise
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
