#include "main.h"

/**
 * _pow2 - return a power of n number
 * @i: base number which i 2
 * @n: power number
 * Return: unsigned integer
*/

unsigned int _pow2(unsigned int i, unsigned int n)
{
	if (n == 0)
		return (1);
	while (n--)
		i *= 2;
	return (i);
}

/**
 * binary_to_uint - convert binary number to decimal
 * @b: pointer to array of chars 1 & 0
 * Return: decimal value or zero
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i, n = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;

	while (i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum += _pow2(1, n);
		n++;
	}
	return (sum);
}
