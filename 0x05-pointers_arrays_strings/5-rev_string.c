#include "main.h"

/**
 * rev_string - a function that reverse a string
 *
 * @s: a string pointer
 *
 * Return: void value
*/

void rev_string(char *s)
{
	int i, j;

	i = 0;

	while (s[i])
		i++;

	for (j = 0; s[j] != '\0'; j++)
	{
		s[j] = s[i];
		i--;
	}
}
