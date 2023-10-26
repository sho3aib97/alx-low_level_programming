#include "main.h"

/**
 * _pow2 - return a power of n number
 * @v: base number which v 2
 * @m: power number
 * Return: unsigned integer
*/

unsigned int _pow2(unsigned int v, unsigned int m)
{
	if (m == 0)
		return (1);
	while (m--)
		v *= 2;
	return (v);
}

/**
 * binary_to_uint - convert binary number to decimal
 * @b: pointer to array of chars 1 & 0
 * Return: decimal value or zero
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int s = 0, v, n = 0;

	if (!b)
		return (0);

	for (v = 0; b[v] != '\0'; v++)
		;

	while (v--)
	{
		if (b[v] != '0' && b[v] != '1')
			return (0);
		if (b[v] == '1')
			s += _pow2(1, n);
		n++;
	}
	return (s);
}
