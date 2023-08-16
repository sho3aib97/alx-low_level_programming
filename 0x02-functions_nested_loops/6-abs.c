#include "main.h"

/**
 * _abs - return the absolute value of n
 *
 * @n: input
 *
 * Return: value of n
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
