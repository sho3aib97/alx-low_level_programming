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

	for (i = 0; i < n; i++)
	{
		s[i]  = b;
	}

	return (s);
}
