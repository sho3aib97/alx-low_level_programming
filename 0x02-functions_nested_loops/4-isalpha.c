#include "main.h"

/**
 * _isalpha - check if the character is alphabetic
 *
 * @c: input value
 *
 * Return: 1 if c is a letter else 0
*/

int _isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
