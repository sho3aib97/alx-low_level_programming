#include "main.h"

/**
 * get_bit - get bit at a specific index
 * @n: number in decimal form
 * @index: index of bit
 * Return: integer 0 or 1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;

	if (n && index)
	{
		while (index--)
			n >>= 1;
		return (n & i);
	}
	return (-1);
}
