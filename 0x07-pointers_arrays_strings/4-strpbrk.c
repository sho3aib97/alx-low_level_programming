#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes
 *
 * @s: a string to search into
 *
 * @accept: set of bytes to search from
 *
 * Return: a pointer to element found
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int n, b;
	char *ptr;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (b = 0; accept[b] == s[n]; b++)
		{
			p = &s[n];
			return (p);
		}
	}
	return (0);
}
