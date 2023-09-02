#include "main.h"

/**
 * _strlen - a function to measure string's length
 *
 * @s : a pointer to a string
 *
 * Return: integer value of the length
*/

int _strlen(char *s)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	if (s[i] == '\0')
		n = i;
	return (n);
}
