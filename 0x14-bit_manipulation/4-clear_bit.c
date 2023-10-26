#include "main.h"

/**
 * clear_bit - setting bit to zero
 * @n: pointer to integer
 * @index: index of specific bit
 * Return: 1 for success and -1 for failure
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index >= sizeof(n) * 8)
		return (-1);

	while (index--)
		m <<= 1;
	*n &= ~m;

	return (1);
}
