#include "main.h"

/**
 * _isdigit - checks if the input is a digit
 *
 * @c: function parameter
 *
 * Return: 1 if c is a digit, otherwise 0
*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
