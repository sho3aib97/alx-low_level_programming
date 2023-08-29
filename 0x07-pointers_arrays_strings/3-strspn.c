#include "main.h"

/**
 * _strspn - a function cout the length of a prefix substring
 *
 * @s: a pointer to a string of characters
 *
 * @accept: second string to compare from
 *
 * Return:length of a prefix substring as an unsigned integer
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, r;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (r = 0; accept[r] != s[m]; r++)
		{
			if (accept[r] == '\0')
				return (m);
		}
	}
	return (m);
}
