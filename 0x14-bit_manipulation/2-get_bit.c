#include "main.h"

/**
 * get_bit - get bit at a specific index
 * @n: number in decimal form
 * @index: index of bit
 * Return: integer 0 or 1
*/

int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= sizeof(n) * 8)
		return (-1);
	while (index--)
		n >>= 1;
	return (n & 1);
}
