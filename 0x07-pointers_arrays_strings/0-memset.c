#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte.
 *
 * @s: pointer to contain the constent
 *
 * @b: a constant
 *
 * @n: number of bytes
 *
 * Return: the pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	unsigned int x;

	x = n;

	for (i = 0; i < x; i++)
	{
		s[i]  = b;
	}

	return (s);
}
