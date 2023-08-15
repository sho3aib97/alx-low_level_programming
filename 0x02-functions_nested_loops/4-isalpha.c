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
	if (64 < c < 91 || 96 < c < 123)
		return (1);
	else
		return (0);
}
