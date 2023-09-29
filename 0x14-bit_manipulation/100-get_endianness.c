#include "main.h"

/**
 * get_endianness - measure of endianness
 * Return: integer value
*/

int get_endianness(void)
{
	unsigned long int m = 1;

	return (*(char *)&m);
}
