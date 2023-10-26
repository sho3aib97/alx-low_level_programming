#include "main.h"

/**
 * flip_bits - determine how many bits required to switch num
 * @n: integer number one
 * @m: integer number two
 * Return: unsigned integer
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l = n ^ m;
	unsigned int sum = 0;

	while (l)
	{
		if (l & 1)
		sum++;
		l >>= 1;
	}
	return (sum);
}
