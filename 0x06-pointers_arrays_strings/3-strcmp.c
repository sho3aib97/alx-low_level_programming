#include "main.h"

/**
 * _strcmp - compare two strings if they're identical
 * @s1: string num 1
 * @s2: string num 2
 * Return: positive or negative of zero value
*/

int _strcmp(char *s1, char *s2)
{
	int done = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			done = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s2++;
		s1++;
	}
	return (done);
}
