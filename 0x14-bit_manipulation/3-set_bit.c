#include "main.h"

/**
 * set_bit - set a specific bit to 1
 * @n: pointer to integer
 * @index: specific index to change to 1
 * Return: integer 1, and -1 if fails
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;

	if (index >= sizeof(n) * 8)
		return (-1);

	while (index--)
		m <<= 1;
	*n |= m;
	return (1);
}
